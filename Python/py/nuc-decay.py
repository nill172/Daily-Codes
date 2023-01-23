'''Simulation of radioactive nuclear decay using random number'''
from numpy.random import *
import matplotlib.pyplot as plt


def decay(lam, N):
    t = 0
    dt = 1
    num = []
    time = []
    
    while(N > 0.5):
        sum = 0
        for i in range(N):
            decay = random()
            if(decay < lam):
                sum = sum + 1
        N = N - sum
        t = t + dt
        num.append(N)
        time.append(t)
        
    plt.subplot(121)
    plt.title('Radioactive decay simulation')
    plt.plot(time, num, '.', label = '$\lambda$ = '+str(lam))
    plt.xlabel("time")
    plt.ylabel("No. of Atom")
    plt.legend()

    plt.subplot(122)
    plt.title('Radioactive decay simulation')
    plt.semilogy(time, num, '.', label = '$\lambda$ = '+str(lam))
    plt.xlabel("time")
    plt.ylabel("No. of Atom")
    plt.legend()
    plt.tight_layout()
    
decay(0.03, 10000)
decay(0.04, 10000)
decay(0.05, 10000)

#plt.savefig('nuc_decay.png')
plt.show()
        
