```python
import numpy as np
```

```python
arr = np.array([1,2,3])
```

```python
rev_arr = np.flip(arr)
print(rev_arr)
```

    [3 2 1]

```python
ran_arr = np.random.random((10,10))
max_col = ran_arr.max(axis=0)
print(max_col)
```

    [0.90255721 0.960978   0.96196712 0.74750282 0.9091215  0.98884618
     0.86034733 0.66192264 0.73175131 0.95621792]

```python
ran_arr = np.random.random((10,10))
for i in np.nditer(ran_arr):
    if i >= 0.5:
        i = 1
    else:
        i = 0
print(ran_arr)
```

    [[0.54147248 0.55439878 0.03630877 0.86643421 0.83809713 0.39391705
      0.76004105 0.20832292 0.23713281 0.85886357]
     [0.60605192 0.55027998 0.08613612 0.36951467 0.98468054 0.77809379
      0.26991118 0.96739875 0.12550871 0.39638083]
     [0.16192214 0.69449707 0.62417309 0.37794266 0.32162257 0.26723829
      0.98150089 0.54209947 0.22331702 0.11497353]
     [0.41589067 0.12536791 0.22285519 0.99756113 0.26953793 0.95374449
      0.34354019 0.70657923 0.24679875 0.87411277]
     [0.06514489 0.33225561 0.20073651 0.33760557 0.15671299 0.87548015
      0.06660453 0.54957538 0.7874687  0.83803422]
     [0.32554627 0.08359743 0.71112754 0.52481416 0.49019354 0.60675294
      0.38630866 0.52877707 0.68784025 0.62346955]
     [0.47463994 0.29143171 0.60717588 0.21641183 0.57539477 0.35661069
      0.11645489 0.92815559 0.85845659 0.21137557]
     [0.16050202 0.58478338 0.20113651 0.8894251  0.44995284 0.66896844
      0.22487233 0.15371897 0.80694609 0.40399515]
     [0.85056259 0.22357854 0.8990229  0.2749028  0.914246   0.82486891
      0.81297944 0.51632449 0.68139041 0.01111021]
     [0.06094719 0.95296648 0.32154983 0.84882522 0.54330105 0.8128901
      0.58759218 0.6026937  0.92525272 0.83816395]]

```python
ran_arr = np.random.random((10,10))
rows,cols = ran_arr.shape
for i in range(rows):
    for j in range(cols):
        if ran_arr[i,j] >= 0.5:
            ran_arr[i,j] = 1
        else:
            ran_arr[i,j] = 0
print(ran_arr)
```

    [[0. 1. 0. 1. 1. 0. 1. 0. 0. 0.]
     [1. 0. 0. 1. 0. 1. 1. 0. 1. 1.]
     [0. 0. 1. 1. 1. 0. 0. 1. 1. 1.]
     [1. 1. 0. 1. 0. 0. 1. 1. 0. 1.]
     [1. 1. 0. 0. 0. 1. 1. 0. 1. 0.]
     [1. 1. 0. 0. 0. 0. 0. 1. 0. 1.]
     [1. 1. 0. 1. 1. 0. 0. 1. 1. 1.]
     [0. 1. 0. 1. 0. 0. 0. 0. 1. 0.]
     [0. 0. 1. 0. 0. 0. 1. 0. 1. 0.]
     [1. 0. 1. 1. 0. 1. 1. 0. 1. 0.]]

```python
def mean(arr):
    rows,cols = ran_arr.shape
    aver = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += arr[i,j]
        ave /= cols
        aver[i] = ave
    return aver
ran_arr = np.random.random((10,10))
print(mean(ran_arr))
```

    [0.44192664 0.33916404 0.39759829 0.44273927 0.47307114 0.55123623
     0.60093449 0.48449206 0.3606751  0.49925558]

```python
def mean(arr):
    rows,cols = ran_arr.shape
    aver = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += arr[i,j]
        ave /= cols
        aver[i] = ave
    return aver
ran_arr = np.random.random((10,10))
print(np.average(ran_arr,axis=0))
print(mean(ran_arr))
```

    [0.40150313 0.64754958 0.63190283 0.5532288  0.57621711 0.43100914
     0.47131497 0.4150495  0.43988113 0.49851198]
    [0.46135761 0.54114258 0.47751492 0.43696957 0.48734864 0.45883933
     0.56101617 0.62218844 0.61430814 0.40548277]

```python
def mean(arr):
    rows,cols = ran_arr.shape
    aver = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += arr[i,j]
        ave /= cols
        aver[i] = ave
    return aver
ran_arr = np.random.random((10,10))
#print(np.average(ran_arr,axis=1))
#计算每列平均值
print(mean(ran_arr))
```

    [0.46925487 0.36932887 0.51047696 0.55746232 0.52093855 0.71458852
     0.53134196 0.60253141 0.45846488 0.45714686]
    [0.46925487 0.36932887 0.51047696 0.55746232 0.52093855 0.71458852
     0.53134196 0.60253141 0.45846488 0.45714686]

```python
def mean(arr):
    rows,cols = arr.shape
    aver = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += arr[i,j]
        ave /= cols
        aver[i] = ave
    return aver
def sv(arr,aver):
    rows,cols = arr.shape
    stan = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += (arr[i,j]-aver[i])**2
        stan[i] = ave
    return stan

ran_arr = np.random.random((10,10))
#print(np.average(ran_arr,axis=1))
#计算每列平均值
print(mean(ran_arr))
std = []
for i in ran_arr:
    std.append(np.std(ran_arr[i]))

print(std)
print(sv(ran_arr,mean(ran_arr)))
```

    [0.37884092 0.55189799 0.42719232 0.45875974 0.46709891 0.64279206
     0.4622561  0.47102646 0.44730884 0.5340337 ]
    [0.40258363 0.86653325 0.6936192  0.86466839 0.83057878 0.27575384
     0.73341622 0.50200853 0.88109865 0.5154761 ]

```python
def mean(arr):
    rows,cols = arr.shape
    aver = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += arr[i,j]
        ave /= cols
        aver[i] = ave
    return aver
def sv(arr,aver):
    rows,cols = arr.shape
    stan = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += (arr[i,j]-aver[i])**2
        stan[i] = ave
    return stan

ran_arr = np.random.random((10,10))
#print(np.average(ran_arr,axis=1))
#计算每列平均值
print(mean(ran_arr))


print(np.std(ran_arr,axis = 0))
print(sv(ran_arr,mean(ran_arr)))
```

    [0.48406052 0.49023532 0.68760876 0.50021454 0.36066268 0.51458573
     0.40594295 0.51020114 0.59420451 0.52979388]
    0.30313808889287985
    [1.0442971  0.8309892  0.32323727 0.69814858 0.55903453 0.9273507
     1.21705304 1.27019404 1.28938365 0.29671879]

```python
def mean(arr):
    rows,cols = arr.shape
    aver = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += arr[i,j]
        ave /= cols
        aver[i] = ave
    return aver
def sv(arr,aver):
    rows,cols = arr.shape
    stan = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += (arr[i,j]-aver[i])**2
        stan[i] = ave
    return stan

ran_arr = np.random.random((10,10))
#print(np.average(ran_arr,axis=1))
#计算每列平均值
print(mean(ran_arr))


print(np.std(ran_arr,axis = 1))
print(sv(ran_arr,mean(ran_arr)))
```

    [0.51064247 0.45834245 0.57170681 0.4014709  0.40871118 0.61145571
     0.48897493 0.50333539 0.41183782 0.35491225]
    [0.28836093 0.24953385 0.31787512 0.21924131 0.21095934 0.27660403
     0.28124061 0.23861056 0.24583986 0.23274752]
    [0.41378189 0.85822498 0.68414163 0.46070862 0.53264066 0.52747685
     0.72258715 0.90270982 0.77830975 1.08814794]

```python
def mean(arr):
    rows,cols = arr.shape
    aver = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += arr[i,j]
        ave /= cols
        aver[i] = ave
    return aver
def sv(arr,aver):
    rows,cols = arr.shape
    stan = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += (arr[i,j]-aver[i])**2

        stan[i] = ave/cols
    return stan

ran_arr = np.random.random((10,10))
#print(np.average(ran_arr,axis=1))
#计算每列平均值
print(mean(ran_arr))


print(np.std(ran_arr,axis = 1))
print(sv(ran_arr,mean(ran_arr)))
```

    [0.44362358 0.49523718 0.35057662 0.53941075 0.4459757  0.60224704
     0.48967258 0.38765798 0.40479023 0.42460851]
    [0.23696189 0.29676234 0.30660411 0.2960275  0.3674463  0.20782301
     0.29958761 0.30402365 0.24744629 0.22095337]
    [0.56150938 0.88067887 0.9400608  0.8763228  1.35016783 0.43190403
     0.89752737 0.92430381 0.61229665 0.48820391]

```python
def mean(arr):
    rows,cols = arr.shape
    aver = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += arr[i,j]
        ave /= cols
        aver[i] = ave
    return aver
def sv(arr,aver):
    rows,cols = arr.shape
    stan = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += (arr[i,j]-aver[i])**2

        stan[i] = (ave/cols)**0.5
    return stan

ran_arr = np.random.random((10,10))
#print(np.average(ran_arr,axis=1))
#计算每列平均值
print(mean(ran_arr))


print(np.std(ran_arr,axis = 1))
print(sv(ran_arr,mean(ran_arr)))
```

    [0.57477285 0.42695554 0.42691719 0.45128902 0.47857929 0.51222634
     0.49848658 0.40211979 0.3496997  0.51425368]
    [0.26336209 0.25597792 0.32331684 0.27545009 0.22162136 0.32792347
     0.29055989 0.30509318 0.24874921 0.31026611]
    [0.06935959 0.06552469 0.10453378 0.07587275 0.04911603 0.1075338
     0.08442505 0.09308185 0.06187617 0.09626506]

```python
def mean(arr):
    rows,cols = arr.shape
    aver = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += arr[i,j]
        ave /= cols
        aver[i] = ave
    return aver
def sv(arr,aver):
    rows,cols = arr.shape
    stan = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += (arr[i,j]-aver[i])**2

        stan[i] = (ave/cols)**0.5
    return stan

ran_arr = np.random.random((10,10))
print(np.average(ran_arr,axis=1))
#计算每列平均值
print(mean(ran_arr))

#计算每列标准差    
print(np.std(ran_arr,axis = 1))
print(sv(ran_arr,mean(ran_arr)))
```

    [0.42957692 0.47203909 0.46421291 0.51481193 0.60329149 0.56447639
     0.57312495 0.49388573 0.54066106 0.55225473]
    [0.28434457 0.24271642 0.23040454 0.20719898 0.30379103 0.34733929
     0.27963175 0.32537556 0.15780962 0.2940219 ]
    [0.28434457 0.24271642 0.23040454 0.20719898 0.30379103 0.34733929
     0.27963175 0.32537556 0.15780962 0.2940219 ]

```python
def mean(arr):
    rows,cols = arr.shape
    aver = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += arr[i,j]
        ave /= cols
        aver[i] = ave
    return aver
def sv(arr,aver):
    rows,cols = arr.shape
    stan = np.zeros(rows)
    for i in range(rows):
        ave = 0
        for j in range(cols):
            ave += (arr[i,j]-aver[i])**2
        stan[i] = (ave/cols)**0.5
    return stan
ran_arr = np.random.random((10,10))
print(np.average(ran_arr,axis=1))
#计算每列平均值
print(mean(ran_arr))
#计算每列标准差    
print(np.std(ran_arr,axis = 1))
print(sv(ran_arr,mean(ran_arr)))
```

    [0.37034375 0.51745996 0.49140928 0.45836795 0.49460112 0.40279453
     0.45680618 0.45635877 0.48680007 0.60490906]
    [0.37034375 0.51745996 0.49140928 0.45836795 0.49460112 0.40279453
     0.45680618 0.45635877 0.48680007 0.60490906]
    [0.29826201 0.37175357 0.22281737 0.27190314 0.27293524 0.26657318
     0.30663862 0.3108195  0.24678623 0.27660465]
    [0.29826201 0.37175357 0.22281737 0.27190314 0.27293524 0.26657318
     0.30663862 0.3108195  0.24678623 0.27660465]

```python
tensor = np.random.random((5,5,3))
mat = np.random.random((5,5))
ans = mat.dot(tensor)
print(ans)
```

    [[[1.30147729 1.15230548 0.92040902]
      [1.15880617 0.52391041 1.56869195]
      [0.76644735 1.10506537 0.88796684]
      [1.2025688  0.61003348 0.38073703]
      [1.53186455 0.70359394 1.20773479]]
    
     [[2.36898662 2.04012691 2.03089396]
      [1.3225238  0.71047361 1.66834956]
      [1.71777163 1.66471557 1.3245014 ]
      [1.82142698 1.20650022 0.92814609]
      [1.67933845 1.12069948 2.17101274]]
    
     [[2.61792684 1.71638499 2.03614421]
      [1.8815979  1.09069427 2.03427567]
      [2.19339744 1.56831986 1.59559545]
      [1.62730048 1.22537809 1.08709551]
      [2.13607733 1.05988771 1.92880604]]
    
     [[2.03537014 1.56341071 1.66641859]
      [1.68276256 0.79168656 1.84416819]
      [1.53442052 1.19636362 1.61794344]
      [1.84099738 0.97953323 0.90272481]
      [1.84300154 1.36135302 1.77472599]]
    
     [[1.44208651 1.14984695 1.25001814]
      [1.0445612  0.5082868  1.1546363 ]
      [1.08968404 0.89673772 0.99051397]
      [1.18555739 0.81603317 0.55286748]
      [1.2170638  0.84395379 1.30743992]]]

```python

```
