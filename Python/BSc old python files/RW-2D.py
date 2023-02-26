import numpy as np
from random import choice
import matplotlib.pyplot as plt

x, y = 0, 0
X, Y = [], []
for i in range(10000):
    dx, dy = choice([(1,0), (-1, 0), (0, 1), (0, -1)])
    x, y = x + dx, y + dy
    X.append(x)
    Y.append(y)
    plt.cla()
    plt.plot(X, Y)
    plt.pause(0.001)
