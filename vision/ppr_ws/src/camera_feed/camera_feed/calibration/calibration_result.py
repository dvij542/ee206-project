import numpy as np

P0 = np.array([[-1.05636301e+03, -1.85330683e+02,  1.50088782e+03,
        -1.30620624e+05],
       [ 4.17146325e+02,  1.53735512e+03,  7.63942527e+02,
        -6.55415409e+04],
       [-8.18944913e-01,  5.73819568e-01,  7.76737791e-03,
         1.86398933e+02]])
P1 = np.array([[-1.35901449e+03,  1.01790363e+03,  2.49652362e+02,
        -2.86578304e+04],
       [ 7.48419960e+02,  1.17082020e+03,  7.96891931e+02,
        -1.86031579e+04],
       [-7.22352052e-03,  8.30083231e-01, -5.57592728e-01,
         3.48182105e+02]])
P2 = np.array([[ 6.53478225e+02,  1.34571996e+03, -7.46017387e+02,
         3.84059313e+05],
       [-4.48155063e+02,  1.04308824e+03,  1.06934946e+03,
        -2.22754557e+05],
       [ 8.42239473e-01,  3.58824181e-01,  4.02340500e-01,
         1.50408543e+02]])
P3 = np.array([[1.74900273e+03, 0.00000000e+00, 5.97062692e+02, 0.00000000e+00],
       [0.00000000e+00, 1.76080222e+03, 4.39085307e+02, 0.00000000e+00],
       [0.00000000e+00, 0.00000000e+00, 1.00000000e+00, 0.00000000e+00]])

#framing with handpicked points
R = np.array([[-0.60500149,  0.38182085, -0.69873456],
       [-0.79189049, -0.26714101,  0.54917128],
       [ 0.02302439,  0.88557069,  0.46398101]])
R = np.array([[0, 1, 0],
                  [1, 0, 0],
                  [0, 0, -1]]) @ R
# R = -1 * np.eye(3) @ R
T = np.array([  38.06259559,  -80.1776424 , -268.31316386]).reshape((3, 1))
g_spatial_cam3 = np.concatenate(
    [np.concatenate([R, R@T], axis=1), np.array([0, 0, 0, 1]).reshape((1, 4))], axis=0)
