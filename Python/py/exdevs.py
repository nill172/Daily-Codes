'''Exponential variate from uniform variate'''

from numpy import *
from numpy.random import *
import matplotlib.pyplot as plt

udev = uniform(0, 1, 1000)

exdevs = -log(udev)

plt.subplot(221)
plt.plot(udev,'.')
plt.subplot(222)
plt.title('Uniform variate')
plt.hist(udev, bins = 10, edgecolor = 'w')
plt.subplot(223)
plt.plot(exdevs,'.')
plt.subplot(224)
plt.title('Exponential variate')
plt.hist(exdevs, bins = 10, edgecolor = 'w')
plt.show()
