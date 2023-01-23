# Estimate of pi
from numpy.random import *
n = 100000
N = sum(uniform(-1,1,n)**2 + uniform(-1, 1, n)**2 <= 1)
pi = 4*N/n
print('Value of pi = ', pi)
