#큰수, 작은수 

max1 = int(input('정수 : '))
min1 = int(input('정수 : '))

if max1 < min1 :
    tmp = max1
    max1 = min1
    min1 = tmp

print('max : %d\tmin : %d'%(max1, min1))

res = max([10,20,30,40,50])

print(res)
