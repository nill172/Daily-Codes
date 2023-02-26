import numpy as np
import matplotlib.pyplot as plt

hbar, w0, k = 1.0, 1.0, 1.0
e0 = hbar * w0
#e0 = 1

n = 1000
N = 1000
ThetaE= hbar*w0/k
T0, Tn, dT = 0.01, 1, 0.01
Trange = np.arange(T0, Tn, dT)
#T = 10
def U(T):
    E = []
    Z = []
    for i in range(n):
        u = (i*e0*np.exp(-(i*e0)/(k*T)))
        z = np.exp(-(i*e0)/(k*T))
        E.append(u)
        Z.append(z)
    U = 3*N*np.sum(E)/np.sum(Z)
    return U

UT = []
for T in Trange:
    UT.append(U(T))

plt.subplot(211)
plt.xlabel('T', fontsize = 16)
plt.ylabel('Avg Energy', fontsize =16)
plt.plot(Trange, UT)

CV = np.diff(UT)/np.diff(Trange)
plt.subplot(212)
plt.xlabel('T', fontsize = 16)
plt.ylabel('CV', fontsize =16)
plt.plot(Trange[0:-1], CV)

plt.show()

         
    
