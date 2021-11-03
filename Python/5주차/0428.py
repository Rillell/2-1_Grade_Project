'''aa = []
bb = [10, 20,30]
cc = ['파이썬','공부는','꿀잼']
dd = [10, 20, 12, 34, '파이썬']

print(aa)
print(bb)
print(cc)
print(dd)

print(bb[0],cc[0])
'''



'''aa = []   #aa = list()
bb= list()

for i in range(0, 200, 2) :
    aa.append(i)

print(aa)

for i in range(0, 100) :  #(99, -1 ,-1), (-1, -100 , -1)
    bb.append(aa[99-i])   #aa[i]

print(bb)'''
   


'''
#리스트 덧셈, 곱셈
aa = [10, 20, 30]
bb = [40, 50, 60]

cc = aa + bb #aa * 3

print(cc)'''


#리스트 추가
aa = [10, 20, 30]

aa[1:3] = [200,300]

print(len(aa))
print(aa) #범위를 지정하면 그 값으로 들어간다. 


aa = [10, 20, 30]
aa[1] = [200,300] #원소를 지정, 원소로 들어간다 
print(len(aa))
print(aa)
