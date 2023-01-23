import numpy as np
import matplotlib.pyplot as plt

E0, En = 0, 6
Erange = np.arange(E0, En, 0.01)
T0, Tn, dT = 1000, 10000, 2000
Trange = np.arange(T0, Tn, dT)
mu, k = 0, 8.61e-5

def fMB(E, T):
    return 1 / (np.exp((E - mu)/(k*T))  )
    
f =[]
energy = []
for T in Trange:
    for E in Erange:
        f.append(fMB(E, T))
        energy.append(E)

l = len(Erange)
for n in range(len(Trange)):
    plt.plot(energy[l*n:l*(n+1)], f[l*n:l*(n+1)], label = 'T = '+str(Trange[n]))
    
plt.legend()
plt.xlabel('$\epsilon$', fontsize = 16)
plt.ylabel('$f_{MB}(\epsilon)$', fontsize = 16)
plt.show()

