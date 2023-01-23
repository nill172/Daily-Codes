'''Probability of getting heads with no. of flipping coins'''
from numpy.random import *
import matplotlib.pyplot as plt

Num = 100
prob_h = []
for n in range(1, Num):
    recordheads = []
    recordtails = []
    heads = 0
    tails = 0
    flip = randint(0, 2, n)

    for i in range(n):
        if (flip[i] == 0):
        
            recordheads.append("Heads")
        else:
            recordtails.append("Tails")
    h = recordheads.count("Heads")/n
    prob_h.append(h)

plt.title('Fraction of head')
plt.plot(prob_h, '-', color = 'red')
plt.show()
                 
        
   
