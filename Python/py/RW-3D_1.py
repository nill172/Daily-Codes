import numpy as np
from random import choice
import matplotlib.pyplot as plt
import numpy.polynomial.polynomial as poly

def walk(step):
    x, y, z = 0, 0, 0
    X, Y, Z, pos = [], [], [], [] 
    for i in range(steps):
        dx, dy, dz = choice([(0,0,1), (0,1,0), (0,-1,0), (0,0,-1), (1,0,0),(-1,0,0)])
        x, y, z = x + dx, y + dy, z + dz
        pos.append(x**2 + y**2 + z**2)
    return pos

steps, config = 1000, 1000
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
plt.title('Exponent of Random walk in 3D = '+str(intercept))
plt.xlabel('log(time)')
plt.ylabel('log($R_{rms}$)')
plt.show()
