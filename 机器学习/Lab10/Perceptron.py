# -*- coding: utf-8 -*-
import numpy as np
import matplotlib.pyplot as plt

def update(W, X, Y, n, lr, iterations):
    J = np.zeros([iterations, 1])
      
    for i in range(iterations):
        # Calculate the predicted values
        Y_pred = np.sign(np.dot(X, W))
        
        # Update the weights
        W += lr * np.dot(X.T, (Y - Y_pred))
        
        # Calculate the cost
        J[i] = np.sum((Y - Y_pred) ** 2) / n

    return (W, J)

data = np.loadtxt('Perceptron.txt', delimiter=',')

n = data.shape[0]
W = np.random.random([3, 1])
X = np.concatenate([np.ones([n, 1]), data[:,0:2]], axis=1)
Y = np.expand_dims(data[:, 2], axis=1)

iterations = 10000  # Training loops
lr = 0.01  # Learning rate

(W, J) = update(W, X, Y, n, lr, iterations)

# Draw figure
idx0 = (data[:, 2] == -1)
idx1 = (data[:, 2] == 1)

plt.figure()
plt.ylim(-12, 12)
plt.plot(data[idx0, 0], data[idx0, 1], 'go')
plt.plot(data[idx1, 0], data[idx1, 1], 'rx')

x1 = np.arange(-10, 10, 0.2)
y1 = -(W[0] + W[1] * x1) / W[2]
plt.plot(x1, y1)

plt.figure()
plt.plot(range(iterations), J)

plt.show()