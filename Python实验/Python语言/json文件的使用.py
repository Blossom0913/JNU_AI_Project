from fileinput import filename
import json
import numbers

import matplotlib.pyplot as plt
import numpy as np


filename  = "coefficient.json"

num = [4 , 3 , 9 , 6]
with open(filename,'w') as f:
    json.dump(num,f)

numbers = [4 , 3 , 9 , 6]
# Data for plotting
t = np.arange(-10, 10, 0.1)
x = 1
for i in numbers:
    if(i==numbers[0]):
        x *= i
    else:
        x *= t
        x += i

fig, ax = plt.subplots()
ax.plot(t, x)

ax.set(xlabel='time (s)', ylabel='voltage (mV)',
       title='About as simple as it gets, folks')
ax.grid()

fig.savefig("test.png")
plt.show()

