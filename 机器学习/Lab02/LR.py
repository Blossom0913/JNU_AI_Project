# -*- coding: utf-8 -*-
import numpy as np
import matplotlib.pyplot as plt

def cost_gradient(W, X, Y, n):
      G =  (((X.dot(W) - Y)*X)/n).mean(0).reshape(2,1)    ###### Gradient
      j = (np.sum(W.T*X - Y))**2/2*n     ###### cost with respect to current W
      return (j, G)

def gradientDescent(W, X, Y, lr, iterations):
      n = np.size(Y)
      J = np.zeros([iterations, 1])
      
      for i in range(iterations):
          (J[i], G) = cost_gradient(W, X, Y, n)
          W = W - lr*G  ###### Update W based on gradient

      return (W,J)

iterations = 100  ###### Training loops
lr = 1e-3  ###### Learning rate

data = np.loadtxt('LR.txt', delimiter=',')
#
n = np.size(data[:, 1])
#初始值为[[0.][0.]]
W = np.zeros([2, 1])
#size 为[50,2]
X = np.c_[np.ones([n, 1]), data[:,0]]
Y = data[:, 1].reshape([n, 1])

(W,J) = gradientDescent(W, X, Y, lr, iterations)

#Draw figure
plt.figure()
plt.plot(data[:,0], data[:,1],'rx')
plt.plot(data[:,0], np.dot(X,W))

plt.figure()
plt.plot(range(iterations), J)

plt.show()