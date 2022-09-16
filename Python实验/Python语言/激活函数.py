# class activateFunction():

    # def __init__(self,a):
    #     self.a = 0.2
import time

def leaky_relu_v1(x):
    if x>0:
        out = x
    else:
        out = 0.2*x
    return out

for i in range(10000000):
    time1 = time.time()
    
    m = leaky_relu_v1(i)

    time2 = time.time()

consumetime = time2-time1

print(consumetime)