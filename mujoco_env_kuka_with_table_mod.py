import mujoco as mj
from mujoco.glfw import glfw
import numpy as np
import math
from gymnasium import spaces
import gymnasium as gym
from scipy.spatial.transform import Rotation as R
import rospy
import mujoco_viewer
from geometry_msgs.msg import Twist

TABLE_SHIFT = 1.7
# MuJoCo XML definition with Franka Panda robot and table tennis setup
xml = """
<mujoco model="table_tennis">
    <include file="/home/dvij/ee206-project/iiwa14.xml"/>
    <compiler angle="radian" />
    <option timestep="0.0167" gravity="0 0 0" />
    <worldbody>
        <!-- Ground -->
        <geom name="floor" type="plane" size="10 10 0.1" rgba="0.8 0.8 0.8 1"/>
        <body name="vis" pos="0 0 1.26" quat="0 0.7068252 0 0.7073883">
            <geom name="cylinder" type="cylinder" pos="0.1 0 0" size="0.10 0.015" rgba="0 1 0 0.3" contype="0" conaffinity="0"/>
            <geom name="handle" type="cylinder" pos="-0.05 0 0" size="0.02 0.05" quat="0 0.7068252 0 0.7073883" rgba="0 0 1 0.3" contype="0" conaffinity="0"/>
        </body>
        <!-- Table -->
        <body name="table" pos="1.7 0 0.66">
            <!-- Table surface -->
            <geom name="table_top" type="box" size="1.37 0.7625 0.02" rgba="0 0 1 1" friction="0.2 0.2 0.1" contype="0" conaffinity="0" />
        </body>

        <body name="net" pos="1.7 0 0.67" euler="0 0 0"> <!-- Position and rotate net -->
            <!-- Net surface -->
            <geom name="net_geom" type="box" size="0.01 0.7625 0.1" rgba="1 1 1 1" friction="0 0 0" contype="0" conaffinity="0" />
        </body>
            
        <!-- Ball -->
        <body name="ball" pos="2 0 2">
            <freejoint name="haha"/>
            <geom name="ball_geom" type="sphere" size="0.02" mass="0.0027" rgba="1 0.5 0 1" 
                  friction="0.001 0.001 0.001" solref="0.04 0.05" solimp="0.9 0.999 0.001" />
        </body>
    </worldbody>
</mujoco>
"""

class KukaTennisEnv(gym.Env):
    def __init__(self, proc_id=0, history=4):
        super(KukaTennisEnv, self).__init__()
        self.history = history  
        self.model = mj.MjModel.from_xml_string(xml)  # Load the MuJoCo model
        self.data = mj.MjData(self.model)

        # Define action and observation spaces
        self.action_space = spaces.Box(low=-0.15, high=0.15, shape=(7,), dtype=np.float32)
        self.observation_space = spaces.Box(low=-np.inf, high=np.inf, shape=(7 + 7 + 7 + 7 + 7 * history,), dtype=np.float32)

        self.viewer = None
        self.max_episode_steps = 100
        self.current_step = 0
        self.prev_actions = np.zeros((history, 7))

        # Ball state attributes
        self.ball_pos = np.array([2.0, 0.0, 2.0])  # Default ball position
        self.ball_vel = np.array([0.0, 0.0, 0.0])  # Default ball velocity

    def update_ball_state(self, ball_pos, ball_vel):
        """Update the ball's position and velocity in the environment."""
        print(ball_pos)
        self.data.qpos[-7:-4] = ball_pos
        self.data.qvel[-6:-3] = ball_vel

    def reset_ball_throw(self):
        print("This shouldnt be called")
        """Reset the ball's position and velocity using ROS data."""
        self.data.qpos[-7:-4] = self.ball_pos
        self.data.qvel[-6:-3] = self.ball_vel

    def step(self, action):
        self.prev_actions[:-1, :] = self.prev_actions[1:, :]
        self.prev_actions[-1, :] = action
        self.current_step += 1

        self.data.ctrl[:] = np.array(action) + np.array(self.data.qpos[:7])
        mj.mj_step(self.model, self.data)

        obs = np.float32(
            np.concatenate([
                self.data.qpos[:7], self.data.qvel[:7],
                self.ball_pos, self.ball_vel, 
                self.prev_actions.flatten()
            ])
        )
        reward = self._calculate_reward()
        done = self._is_done()
        info = {}
        return obs, reward, done, False, info

    def reset(self, seed=None):
        self.current_step = 0
        self.prev_actions = np.zeros((self.history, 7))
        mj.mj_resetData(self.model, self.data)
        self.reset_ball_throw()
        return np.float32(
            np.concatenate([
                self.data.qpos[:7], self.data.qvel[:7],
                self.ball_pos, self.ball_vel, 
                self.prev_actions.flatten()
            ])
        ), {}

    def render(self, mode="human"):
        if not hasattr(self, 'viewer'):
            self.viewer = mj.MjViewer(self.model)
        if self.viewer is None:
            self.viewer = mujoco_viewer.MujocoViewer(self.model, self.data)
        self.viewer.render()

    def close(self):
        if self.viewer is not None:
            self.viewer.close()
            self.viewer = None

    def _calculate_reward(self):
        # Calculate reward based on the environment state
        reward = -10.0  # Example reward calculation
        return reward

    def _is_done(self):
        # Implement termination condition
        return False

if __name__ == "__main__":
    env = KukaTennisEnv()
    obs = env.reset()
    for i in range(1000):
        action = env.action_space.sample() * 0  # Random action
        obs, reward, done, _, _ = env.step(action)
        env.render()
    env.close()
