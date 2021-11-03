#lst = ['i Love seoil', 'python', 'korea']
#lst0 = list(map(len, lst)) 을 사용하지 않을땐 아래

'''lst0 = []

for v in lst :
    lst0.append(len(v))

print(lst0)'''




lst = ['a:b:c', 'aaa:nnn:ccc:ddd']

lst0 = list(map(split(':'),lst)) #split은 혼자 쓸수있는 것이
                                 #아니라 앞에 문자열이 있어야 하기 때문에 오류가 난다.
print(lst0)
