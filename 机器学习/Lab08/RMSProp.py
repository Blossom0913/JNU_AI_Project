import numpy as np
import matplotlib.pyplot as plt

x = np.arange(-3,3,0.3)
y = np.arange(-3,3,0.3)
x,y = np.meshgrid(x,y)
levels = 24

# 3*(1-x)^2*exp(-(x^2)-(y+1)^2)-10*(x/5-x^3-y^5)*exp(-x^2-y^2)-1/3*exp(-(x+1)^2-y^2)
z = 3*(1-x)**2*np.exp(-x**2-(y+1)**2)-10*(x/5-x**3-y**5)*np.exp(-x**2-y**2)-1/3*np.exp(-(x+1)**2-y**2)

fig = plt.figure(figsize=(8,5))
plt.tick_params(labelsize=18)
plt.xlabel("$x$", fontsize=24)
plt.ylabel("$y$", fontsize=24)

plt.contourf(x,y,z,levels=levels,cmap="rainbow")
line = plt.contour(x,y,z,levels=levels,colors="k")

# x = np.random.uniform(-2,2)
# y = np.random.uniform(-2,2)
x = -0.15
y = 1.2

iterations = 10000###### Training loops
lr = 0.1###### Learning rate

S_x = 0
S_y = 0
beta = 0.9
episilon = 1e-6
for  i in range(iterations):
    pdx = (-6*x**3+12*x**2-6)*np.exp(-x**2-(y+1)**2)-(20*x*y**5+20*x**4-34*x**2+2)*np.exp(-x**2-y**2)+2/3*(x+1)*np.exp(-(x+1)**2-y**2)
    pdy = ((-6*x**2+12*x-6)*y-6*x**2+12*x-6)*np.exp(-x**2-(y+1)**2)-(20*y**6-50*y**4+20*x**3*y-4*x*y)*np.exp(-x**2-y**2)+2/3*y*np.exp(-(x+1)**2-y**2)
    
    S_x = beta*S_x + (1-beta)*(pdx**2)
    S_y = beta*S_y + (1-beta)*(pdy**2)
    
    ###### Revise the code and use different GD algorithm to reach the global optimum
    dx = (-lr*pdx)/(S_x+episilon)**0.5
    dy = (-lr*pdy)/(S_y+episilon)**0.5
    ###### Revise the code and use different GD algorithm to reach the global optimum
    
    plt.arrow(x, y, dx, dy, length_includes_head=False, head_width=0.1, fc='r', ec='k')
    x += dx
    y += dy


plt.show()