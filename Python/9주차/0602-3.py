#함수

'''def plus(v1, v2) :
    result = 0
    result = v1 + v2
    return result

hap = 0

hap = plus(100,200)

print(hap)'''


'''def func1() :
    #global a
    a = 10
    print("func1 => ", a)

def func2():
    print("func2 => ", a)

a= 20

print(a)
func1()
func2()
print(a)'''


def para_func(*para):        #(v1=1, v2=0, v3=0, v4=0):
    result = 0
    for v in para:
        result += v
    return result

hap = para_func()
print(hap)

hap = para_func(100)
print(hap)

hap = para_func(100,200)
print(hap)

hap = para_func(100,200,300)
print(hap)
    
