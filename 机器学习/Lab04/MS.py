# -*- coding: utf-8 -*-
import numpy as np
import matplotlib.pyplot as plt


def read_data(addr):
    data = np.loadtxt(addr, delimiter=',')

    n = data.shape[0]
    
    ###### You may modify this section to change the model

    X = np.concatenate([np.ones([n, 1]),
                        np.expand_dims(np.power(data[:,1],4), axis=1),
                        np.expand_dims(np.power(data[:,1],2), axis=1),
                        np.expand_dims(np.power(data[:,1],3), axis=1),
                        np.expand_dims(np.power(data[:,1],1), axis=1),
                        np.expand_dims(np.power(data[:,1],5), axis=1),
                        np.expand_dims(np.power(data[:,1],6), axis=1),
    ]
                        ,axis=1)
    ###### You may modify this section to change the model
    
    Y = None
    if "Train" in addr:
        Y = np.expand_dims(data[:, 6], axis=1)
    
    return (X,Y,n)

def cost_gradient(W, X, Y, n):
    Y_1 = 1/(1+np.exp(-X@W))
    G = X.T @ (Y_1 - Y) / n
    j = np.mean(-Y*np.log(Y_1) - (1-Y)*np.log(1-Y_1))
    
    return (j, G)

def train(W, X, Y, lr, n, iterations):
    J = np.zeros([iterations, 1])
    E_trn = np.zeros([iterations, 1])
    E_val = np.zeros([iterations, 1])
    ###### You may modify this section to do 10-fold validation
         
    #for i in np.arange(10):
        
        #e = int((i+1)*n*0.1)
        #print(s)
        #print(e)
    '''
        X_trn = np.append(X[:s],X[e:],axis=0)
        Y_trn = np.append(Y[:s],Y[e:],axis=0)
        X_val = X[s:e]
        Y_val = Y[s:e]
        
        '''
    n = int(0.9*n)
    X_trn = X[:n]
    Y_trn = Y[:n]
    X_val = X[n:]
    Y_val = Y[n:]
        
    for i in range(iterations):
        (J[i], G) = cost_gradient(W, X_trn, Y_trn, n)
        W = W - lr*G
        E_trn[i] = error(W, X_trn, Y_trn)
        E_val[i] = error(W, X_val, Y_val)
        
        
    print(E_val[-1])
    ###### You may modify this section to do 10-fold validation

    return (W,J,E_trn,E_val)

def error(W, X, Y):
    Y_hat = 1 / (1 + np.exp(-X@W))
    Y_hat[Y_hat<0.5] = 0
    Y_hat[Y_hat>0.5] = 1
    
    return (1-np.mean(np.equal(Y_hat, Y)))

def predict(W):
    (X, _, _) = read_data('Lab04\Test_Data.csv')
    
    Y_hat = 1 / (1 + np.exp(-X@W))
    Y_hat[Y_hat<0.5] = 0
    Y_hat[Y_hat>0.5] = 1
    
    idx = np.expand_dims(np.arange(1,201), axis=1)
    np.savetxt("predict.csv", np.concatenate([idx, Y_hat], axis=1), header = "Index,ID", comments='', delimiter=',')

iterations = 100000###### Training loops
lr = 1e-3###### Learning rate

(X, Y, n) = read_data('Lab04\Train.csv')
W = np.random.random([X.shape[1], 1])

(W,J,E_trn,E_val) = train(W, X, Y, lr, n, iterations)

###### You may modify this section to do 10-fold validation
plt.figure()
plt.plot(range(iterations), J)
plt.figure()
plt.ylim(0,1)

plt.plot(range(iterations), E_trn, "b")
plt.plot(range(iterations), E_val, "r")
plt.show()
###### You may modify this section to do 10-fold validation

predict(W)
