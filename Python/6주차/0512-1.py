lst = [[1,2,3],[4,5],[7,8,9,5,1]] #이차원리스트

'''for i in range(0, len(lst)) :
    for j in range(0,len(lst[i])) :
        print('%5d'%lst[i][j], end = '')
    print()
    '''

for v1 in lst :
    for v2 in v1 :
        print('%5d'%v2, end = '')
    print()

    

