import time

def leaky_relu_v2(x,a=0.2):
    if x>0:
        out = x
    else:
        out = a*x

    return out
a = time.time()
for m in range(-10000000,10000000):
    leaky_relu_v2(m)
b = time.time()

run_sess = b-a

print(f"consumed time is {run_sess}s.")

# n = input("please enter a number:\n")
# n = int(n)
# m = leaky_relu_v2(n)
# print(str(m))