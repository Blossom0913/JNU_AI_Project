import numpy as np
import matplotlib.pyplot as plt

# Utilities
def onehotEncoder(Y, ny):
    return np.eye(ny)[Y]




# Compute the cost function
def cost(Y_hat, Y):
    n = Y.shape[0]
    c = -np.sum(Y * np.log(Y_hat.reshape(n, -1)[:, :10])) / n
    return c

def test(Y_hat, Y):
    Y_out = np.zeros_like(Y)
    idx = np.argmax(Y_hat[-1], axis=1)
    Y_out[range(Y.shape[0]), idx] = 1
    acc = np.sum(Y_out * Y) / Y.shape[0]
    print("Training accuracy is: %f" % (acc))
    return acc

# Load data
data = np.load("data.npy")
X = data[:, :-1].reshape(data.shape[0], 20, 20).transpose(0, 2, 1)
Y = data[:, -1].astype(np.int32)
(n, L, _) = X.shape
Y = onehotEncoder(Y, 10)

# Define hyperparameters
learning_rate = 0.01
num_layers = 2
num_kernels = 1
kernel_size = 3
pooling_size = 2

# Initialize parameters
np.random.seed(0)
W = [np.random.randn(num_kernels, kernel_size, kernel_size) for _ in range(num_layers)]
b = [np.zeros((num_kernels, 1, 1)) for _ in range(num_layers)]

# Forward propagation
Z = [np.zeros((n, L - kernel_size + 1, L - kernel_size + 1)) for _ in range(num_layers)]
A = [np.zeros_like(Z[i]) for i in range(num_layers)]

for i in range(n):
    for j in range(L - kernel_size + 1):
        for k in range(L - kernel_size + 1):
            Z[0][i, j, k] = np.sum(X[i, j:j+kernel_size, k:k+kernel_size] * W[0]) + b[0]
            A[0][i, j, k] = np.maximum(0, Z[0][i, j, k])

from scipy.signal import convolve2d

# ...

for layer in range(1, num_layers):
    for i in range(n):
        for j in range(L - kernel_size + 1):
            for k in range(L - kernel_size + 1):
                Z[layer][i, j, k] = np.sum(convolve2d(A[layer-1][i], W[layer][0, ::-1, ::-1], mode='valid')) + b[layer]
                A[layer][i, j, k] = np.maximum(0, Z[layer][i, j, k])

# Compute cost and accuracy
Y_hat = A[-1]
c = cost(Y_hat, Y)
print("Cost: %f" % c)
test(Y_hat, Y)