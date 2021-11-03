#ss = '나는 어제 공부를 했다. 나는 공부가 재미있다. 나는 계속 공부 할 것이다'

'''print(ss.count('나')) #문자열 개수'''

#찾기 기능
'''fstr = input("찾을 문자열 : ")

strcnt = ss.count(fstr)
inx = 0
for i in range(0, strcnt) :
    fss = ss.find(fstr, inx)
    print(fss)
    inx = fss + 1

print("모두 찾았습니다.")'''


ss = '201903992=김유빈=30439'
lst = ss.split('=')
print(lst)
