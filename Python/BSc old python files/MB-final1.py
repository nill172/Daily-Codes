import numpy as np
import matplotlib.pyplot as plt
from matplotlib.widgets import Slider

fig, ax = plt.subplots()
plt.subplots_adjust(left=0.25, bottom=0.25)

E0, En = 0, 6
Erange = np.arange(E0, En, 0.01)
T0, Tn, dT = 1, 10000, 500
Trange = np.arange(T0, Tn, dT)
mu, k = 3.1, 8.61e-5

def fMB(E, T):
    return 1 / (np.exp((E - mu)/(k*T))+1 )

T = 1000    
f =[]
energy = []
for E in Erange:
    f.append(fMB(E, T))
    energy.append(E)

p, = plt.plot(energy, f, lw = 2)


axT = plt.axes([0.25, 0.1, 0.65, 0.03])
sT = Slider(axT, 'T', 10, 10000, valinit=1000, valstep=100)

def update(val):
    T = sT.val
    f =[]
    energy = []
    for E in Erange:
        f.append(fMB(E, T))
        energy.append(E)
    p.set_ydata(f)
    fig.canvas.draw_idle()

sT.on_changed(update)

plt.show()

