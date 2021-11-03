'''list1 = [1,2,3,4]
list2 = [10,20,30,40]


haplist = list(map(lambda n1, n2 : n1 + n2, list1, list2))

print(haplist)'''



'''list1 = [1,2,3,4]
list2 = [10,20,30]

haplist = []

cnt = min(len(list1), len(list2))

for i in range(0, cnt) :
    haplist.append(list1[i]+list2[i])
print(haplist)'''


#재귀함수
'''def selfCall() :
    print('하', end = '')
    selfCall()

selfCall()'''



def count(num) :
    if num >= 1 :
        print(num, end = ' ')
        count(num-1)
        print('-->', num)
    else :
        return
count(10)
