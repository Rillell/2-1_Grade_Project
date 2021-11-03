#튜플

title = ('학번', '성명', '국어', '영어', '수학', '총점', '평균', '순위')


lst = list(title)
print(lst)
lst[0] = '번호'
print(lst)
title = tuple(lst)


'''print('='*64)
for t in title :
    print(t, '\t', end='')
print()
print('-'*64)
'''
