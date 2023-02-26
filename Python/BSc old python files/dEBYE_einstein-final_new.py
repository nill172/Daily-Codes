"""Variation of Einstein and Debye specific heat with temperature"""
import numpy as np
import matplotlib.pyplot as plt
from scipy.integrate import quad

h, k, V = 6.262e-34, 1.38e-23, 1.0
thD = 125   #taking thetaD = thetaE
nD = k*thD/h    # h*nD = k*thD
e0 = h*nD
T0, Tn, dT = 0.001, 300, 1.0
Trange = np.arange(T0, Tn, dT)
N = 10000  #No. of atoms

##Debye specific heat
def D(n, T):
    return (9*N/nD**3)*(n**2)*(h*n)/(np.exp(h*n/(k*T))-1)

UTD = []
for T in Trange:
    U = quad(D, 0, nD, args = (T))
    UTD.append(U[0])
    
CVD = np.diff(UTD)/np.diff(Trange)

## Einstein specific heat
def UE(T):
    E = []
    Z = []
    for i in range(1000):
        u = (i*e0*np.exp(-(i*e0)/(k*T)))
        z = np.exp(-(i*e0)/(k*T))
        E.append(u)
        Z.append(z)
    UE = 3*N*np.sum(E)/np.sum(Z)
    return UE

UTE = []
for T in Trange:
    UTE.append(UE(T))

CVE = np.diff(UTE)/np.diff(Trange)

##Plotting
plt.plot(Trange[1:]/thD, CVD/(3*N*k), color = 'green', label = 'Debye')
plt.plot(Trange[1:]/thD, CVE/(3*N*k) , color = 'red', label = 'Einstein')
plt.xlabel('T / ${\Theta}_D$', fontsize = 12)
plt.ylabel('Cv / 3NK', fontsize =12)
plt.legend()
plt.show()

         
    
