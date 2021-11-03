'''def outF(v1, v2) :
    def inF(num1, num2) :
        return num1 + num2
    return inF(v1, v2)

print(outF(10, 20))'''



'''hap = lambda num1, num2 : num1 + num2
sub = lambda num1, num2 : num1 - num2

print(hap(10,20))

print(sub(20, 10))'''


'''myList = [1,2,3,4,5]

add10 = lambda num : num + 10

myList = list(map(add10, myList))

print(myList)'''


myList = [1,2,3,4,5]

def add10(num) :
    return num + 10

myList = list(map(add10, myList))
print(myList)
