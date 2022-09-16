a = input("please enter the lengeth of list")
a = int(a)
list1 = []
for i in range(a):
    n = input("please enter yuansu in list:")
    list1.append(n)

list2 = [4,5,6]
m = list(zip(list1,list2))
print(m)

for i in enumerate(m):
    print("现在迭代第{}个元素。".format(i[0]+1))
    print(i)

for i in range(len(m)):
    print(f"现在迭代第{str(i+1)}个元素")