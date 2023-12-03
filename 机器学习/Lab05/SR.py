# -*- coding: utf-8 -*-
import numpy as np
import matplotlib.pyplot as plt

def soft_max(Z):
    ret = np.array(Z)
    i = 0
    for z in Z:
        ret[i] = np.exp(z)/np.sum(np.exp(Z))
        i += 1
    return ret
   
def cost_gradient(W, X, Y, n):
    Z = X@W
    Y_hat = soft_max(Z)
    
    G = ((Y_hat - Y)*X[:,1:]).mean(0)###### Gradient
    j = -np.sum(np.log(Y_hat))/n###### cost with respect to current W

    return (j, G)

def train(W, X, Y, n, lr, iterations):
    J = np.zeros([iterations, 1])

    for i in range(iterations):
        (J[i], G) = cost_gradient(W, X, Y, n)
        W = W - lr*G

    return (W,J)

def error(W, X, Y):
    Z = X@W
    Y_hat = soft_max(Z)###### Output Y_hat by the trained model
    pred = np.argmax(Y_hat, axis=1)
    label = np.argmax(Y, axis=1)
    
    return (1-np.mean(np.equal(pred, label)))

iterations = 1000###### Training loops
lr = 1e-1###### Learning rate

data = np.loadtxt('Lab05/SR.txt', delimiter=',')

n = data.shape[0]
X = np.concatenate([np.ones([n, 1]),
                    np.expand_dims(data[:,0], axis=1),
                    np.expand_dims(data[:,1], axis=1),
                    np.expand_dims(data[:,2], axis=1)],
                   axis=1)
Y = data[:, 3].astype(np.int32)
c = np.max(Y)+1
Y = np.eye(c)[Y]

W = np.random.random([X.shape[1], c])

(W,J) = train(W, X, Y, n, lr, iterations)

plt.figure()
plt.plot(range(iterations), J)

plt.show()

print(error(W,X,Y))