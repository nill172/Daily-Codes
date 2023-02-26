'''simulation of certain 'n1' no of coin flip
simultaneously with 'Num' no. of trial using numpy.unique'''
from numpy.random import *
from numpy import *
import matplotlib.pyplot as plt
from math import comb

def f(n):
    return [sum(randint(0, 2, n)) for i in range(trial)]
n = 100
x = [0]*n
y = [0]*n
trial = 10000
a = f(n)
plt.subplot(211)
plt.hist(a, bins = 20, edgecolor = 'w')
x , y = unique(a, return_counts = True)
proby = y / trial        #probability of getting head
    
def binm(x, n, p):
    return comb(n, x)*p**x*(1-p)**(n-x)

plt.subplot(212)
plt.title('Probability distribution of head')
plt.plot(x, proby,'o')

b = []
x = []
for j in range(0, n, 1):
    b.append(binm(j, n, 0.5))
    x.append(j)
plt.plot(x, b, '-')
plt.title('binomial distribution fit')
plt.xlabel('No. of heads')
plt.ylabel('Probability')
plt.tight_layout()
plt.show()

                 
        
   
