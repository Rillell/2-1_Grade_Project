import random

lst0 = []   #일차원리스트 
lst = []    #이차원리스트

for i in range(0,5) :
    for j in range(0,5) :
        num = random.randint(33,77)
        lst0.append(num)
    lst.append(lst0)
    lst0 =[]


for i in range(0,5) :
    for j in range(0,5) :
        print('%5d'%lst[i][j], end = '')
    print()
