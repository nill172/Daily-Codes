'''Coin toss simulation-count no. of heads/tails for flipping coins'''
from numpy.random import *

number = int(input("Number of times to flip coin: "))
recordheads = []
recordtails = []
heads = 0
tails = 0
flip = randint(0, 2, number)

for i in range(number):
    if (flip[i] == 0):
        
        recordheads.append("Heads")
    else:
        recordtails.append("Tails")
print('Heads=', (recordheads.count("Heads")))
print('Tails=', (recordtails.count("Tails")))
        
   
