import numpy as np
from random import choice
import matplotlib.pyplot as plt
import numpy.polynomial.polynomial as poly

def walk(step):         # return square of distance in each step
    x, y = 0, 0
    X, Y, pos = [], [], [] 
    for i in range(steps):
        dx, dy = choice([(1,0), (-1, 0), (0, 1), (0, -1)])
        x, y = x + dx, y + dy
        pos.append(x**2 + y**2)
    return pos

steps, config = 400, 2000
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
