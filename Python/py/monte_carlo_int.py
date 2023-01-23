from numpy import *

def f(x):
    return sin(x)

def MCI1(a, b, f):
    N = 100000        # No of trials
    x = linspace(a, b, N)    # x domain
    ymin = 0
    ymax = max(f(x))
    A = (b - a)*(ymax - ymin)

    x = random.uniform(a, b, N)
    y = random. uniform(ymin, ymax, N)
    n = sum([(y) < (f(x))])       #Points under the curve
    return A*n/N

def MCI2(a, b, f):
    x = random.uniform(a, b, 10000)
    return (b - a)*mean(f(x))

a, b = 0, pi
print(MCI1(a, b, f))
print(MCI2(a, b, f))
    
    
