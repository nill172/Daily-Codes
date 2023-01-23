import numpy as np
import matplotlib.pyplot as plt
from matplotlib.widgets import Slider

E0, En = 0.1, 6
Erange = np.arange(E0, En, 0.1)
T0, Tn, dT = 10, 10000, 1000
Trange = np.arange(T0, Tn, dT)
mu, k = 3.1, 8.61e-5

def fFD(E, T):
    return 1 / (np.exp((E - mu)/(k*T)) + 1 )

f =[]
energy = []
for T in Trange:
    for E in Erange:
        f.append(fFD(E, T))
        energy.append(E)

l = len(Erange)
for n in range(len(Trange)):
    plt.plot(energy[l*n:l*(n+1)], f[l*n:l*(n+1)], label = 'T = '+str(Trange[n]))
plt.legend(loc='upper left', fontsize = 8)
plt.xlabel('$\epsilon$', fontsize = 16)
plt.ylabel('$f_{BE}(\epsilon)$', fontsize = 16)
plt.show()

