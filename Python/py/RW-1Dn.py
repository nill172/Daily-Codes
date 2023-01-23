import numpy as np
from random import choice
import matplotlib.pyplot as plt

x = 0
X = []
for i in range(10000):
    dx = choice([(1), (-1)])
    x = x + dx
    X.append(x)
    plt.cla()
    plt.plot(X)
    plt.pause(0.001)
