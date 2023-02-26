from numpy import *

def f(x):
    return sin(x)

def MCI1(a, b, f):
    N = 100000        # No of trials
    x = linspace(a, b, N)    # x domain
    ymin = min(f(x)) 
    ymax = max(f(x)) 
    A = (b - a)*(ymax - ymin)
    m, n = 0, 0
    x = random.uniform(a, b, N)
    y = random. uniform(ymin, ymax, N)
    for i in range(N):
        if (y[i] > 0 and y[i] < f(x[i]) and f(x[i]) > 0):
            m = m + 1
        if (y [i] < 0 and y[i] > f(x[i]) and f(x[i]) < 0):
            n = n + 1                
    return A*(m - n)/N

def MCI2(a, b, f):
    x = random.uniform(a, b, 100000)
    return (b - a)*mean(f(x))

a, b = 0, 2*pi
print(MCI1(a, b, f))
print(MCI2(a, b, f))
    
    
