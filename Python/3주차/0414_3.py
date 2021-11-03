#반복문 출력   0부터 시작, 3미만까지, 1씩 증가

for i in range(0, 3, 1) :
    print(i, end=', ')   #end=' ' => 옆으로 출력

print()

for i in ['S',0,1.12] :
    print(i, type(i))
