import numpy as np
from random import choice
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

x, y, z = 0, 0, 0
X, Y, Z = [], [], []
for i in range(10000):
    dx, dy, dz = choice([(0,0,1), (0,1,0), (0,-1,0), (0,0,-1), (1,0,0),(-1,0,0)])
    x, y, z = x + dx, y + dy, z + dz
    X.append(x)
    Y.append(y)
    Z.append(z)
    plt.cla()
    ax = plt.subplot(1,1,1, projection='3d')
    ax.plot(X, Y, Z,alpha=0.6)
    ax.scatter(X[-1],Y[-1],Z[-1])
    plt.pause(0.001)
