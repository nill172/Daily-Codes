import numpy as np
import matplotlib.pyplot as plt

x = 0
X = []

for t in range(1000):
    step = 2*np.random.randint(2) - 1   #randonm integer (+1 or -1)
    x = x + step

    X.append(x)

    plt.cla()
    plt.plot(X)
    plt.pause(0.001)
