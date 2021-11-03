#구구단 출력


i, j = 0, 0
for i in range(2, 10):
    print(' =%d단=\t'%i, end='')
print()
print('-'*62)
for i in range(1, 10, 1):    
    for j in range(2, 10):
        print('%dX%d =%2d\t'%(j, i,j*i), end='')
    print()



        
