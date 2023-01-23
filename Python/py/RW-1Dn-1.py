'''Random walk 1D: rms end to end distance after each steps'''
import numpy as np
from random import choice
import matplotlib.pyplot as plt
import numpy.polynomial.polynomial as poly

def walk(steps):
    x = 0
    X = []
    for i in range(steps):
        dx = choice([(1), (-1)])
        x = x + dx
        X.append(x**2)
    return X

steps, config = 100, 2000
R2 = np.array([walk(steps) for i in range(config)])
mwalk = np.mean(R2, axis = 0)
rms = np.sqrt(mwalk)

t = range(1, steps + 1)
t = np.log(t)
rms = np.log(rms)

coeff = poly.polyfit(t, rms, 1)
rmsfit = poly.polyval(t, coeff)
print(coeff)
intercept = np.round(coeff[1], 4)

plt.plot(t, rms, 'o', t, rmsfit, '-', lw = 3)
plt.title('Exponent of Random walk in 2D = '+str(intercept))
plt.xlabel('log(time)')
plt.ylabel('log($R_{rms}$)')
plt.show()
    
