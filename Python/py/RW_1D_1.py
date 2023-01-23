import numpy as np
import matplotlib.pyplot as plt
import numpy.polynomial.polynomial as poly

N , T = 10000, 1000
t = range(1, T+1)

walks = 2*np.random.randint(2, size = (N, T)) - 1
pos = np.cumsum(walks, axis = 1)
pos_sq = pos**2
mean_pos_sq = np.mean(pos_sq, axis = 0)
rms = np.sqrt(mean_pos_sq)

t = np.log(t)
rms = np.log(rms)

coeff = poly.polyfit(t, rms, 1)
rmsfit = poly.polyval(t, coeff)
print(coeff)
intercept = np.round(coeff[1], 4)

plt.plot(t, rms, 'o', t, rmsfit, '-', lw = 3)
plt.title('Exponent of Random walk in 1D = '+str(intercept))
plt.xlabel('log(time)')
plt.ylabel('log($R_{rms}$)')
plt.show()


