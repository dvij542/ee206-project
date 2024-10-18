from mujoco_env_only_kuka import KukaTennisEnv
# from stable_baselines3.common.env_util import SubprocVecEnv
from stable_baselines3 import PPO


env = KukaTennisEnv(proc_id=1)
model = PPO.load("logs/best_model/best_model")
obs, _ = env.reset()
for i in range(20000):
    # print(i)
    action, _ = model.predict(obs, deterministic=True)
    # action = env.get_expert_cmd()
    obs, reward, done, _, info = env.step(action)
    # print(i, reward)
    env.render()
    if done:
        # print("Reset requested")
        obs, _ = env.reset()
    # if done:
    #     obs, _  = env.reset()

env.close()
