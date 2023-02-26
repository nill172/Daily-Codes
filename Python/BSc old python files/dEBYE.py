import numpy as np
import matplotlib.pyplot as plt
from scipy.integrate import quad


h, n0, k, V = 6.262e-34, 1e10, 1.38e-23, 1.0
e0 = h * n0
thD, ct, cl = 3, 1.0, 1.0
nD = k*thD/h
N = 1000
T0, Tn, dT = 0.01, 5, 0.01
Trange = np.arange(T0, Tn, dT)

def D(n, T):
    return (9*N/nD**3)*(n**2)*(h*n)/(np.exp(h*n/(k*T))-1)
    
UT = []
for T in Trange:
    U = quad(D, 0, nD, args = (T))
    UT.append(U[0])


plt.subplot(211)
plt.xlabel('T', fontsize = 12)
plt.ylabel('Avg Energy', fontsize =12)
plt.plot(Trange, UT)

CV = np.diff(UT)/np.diff(Trange)
plt.subplot(212)
plt.plot(Trange[0:-1], CV/(3*N*k))
plt.xlabel('T', fontsize = 12)
plt.ylabel('Cv', fontsize =12)
plt.tight_layout()
plt.show()

         
    
