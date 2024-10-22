from mujoco_env_kuka_with_gantry_table import KukaTennisEnv
from mujoco_env_only_kuka_ik import KukaTennisEnv as KukaTennisEnvIK
# from stable_baselines3.common.env_util import SubprocVecEnv
from stable_baselines3 import PPO
import time
import numpy as np


env = KukaTennisEnv(proc_id=1)
env_ik = KukaTennisEnvIK(proc_id=1)
model = PPO.load("logs/best_model2/best_model")
obs, _ = env.reset()
# obs_ik, _ = env_ik.reset()
for i in range(20000):
    # print(i)
    # env_ik.reset_pose(env.data.qpos[2:9])
    # env_ik.reset_pose(env.data.qpos[:7])
    # env_ik.set_target_pose(env.curr_target)
    # for j in range(50):
    #     action_ik, _ = model.predict(obs_ik, deterministic=True)
    #     obs_ik, reward, done, _, info = env_ik.step(action_ik)
    # # action = env_ik.data.qpos[:7] - env.data.qpos[2:9]
    # action = (env_ik.data.qpos[:7]- env.data.qpos[:7])
    # print(action,env.data.qpos[:7])
    action,_ = model.predict(obs, deterministic=True)
    # action = env.get_expert_cmd()
    # action = np.zeros(9)
    # action[0] = -0.15
    # action[1] = -0.15
    obs, reward, done, _, info = env.step(action)
    # print(obs[:9])
    # print(i, reward)
    env.render()
    # if i>1000 :
    #     break
    if done:
        print("Reset requested")
        obs, _ = env.reset()
    # time.sleep(0.05)
    # if done:
    #     obs, _  = env.reset()

env.close()
