'''simulation of certain 'n1' no of coin flip
simultaneously with 'Num' no. of trial'''
from numpy.random import *
from numpy import *
import matplotlib.pyplot as plt
from math import comb
    
Num = 10000         #Number of coin toss expt
n1 = 20     #Number of tossing of coin in each expt
head = []
prob_h = []
h1 = []
hc = [0]*(1+n1)
for n in range(1, Num): 
    recordheads = []
    recordtails = []
    flip = randint(0, 2, n1)

    for i in range(n1):
        if (flip[i] == 0):        
            recordheads.append("Heads")
        else:
            recordtails.append("Tails") 
    h = recordheads.count("Heads")
    for j in range(n1):
        if (j == h):
            hc[j] = hc[j] + 1
    head.append(h)
    #prob_h.append(probh)
print(hc)
s = sum(head)
print(s)

def binm(x, n1, p):
    return comb(n1, x)*p**x*(1-p)**(n1-x)
  
plt.title('Fraction of head')
plt.xlim(0, n1)
plt.subplot(121)
plt.hist(head, bins = 10, edgecolor = 'w')
plt.subplot(122)

x1 = []
prob = []
for k in range(len(hc)):
    prob.append(hc[k]/Num)
    x1.append(k)

plt.plot(x1, prob, '.', label = 'dist from random no.')
b = []
x = []
for j in range(0, len(hc), 1):
    b.append(binm(j, n1, 0.5))
    x.append(j)
plt.plot(x, b, '-', label = 'binomial dist.')
plt.xlabel('No. of heads')
plt.ylabel('Prob. of head')
plt.legend()
plt.show()

                 
        
   
