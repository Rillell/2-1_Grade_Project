#사칙연산
num1 = input('수식 : ')

res = eval(num1)
print('%s = %.2f'%(num1 , res))




'''
num1 = int(input('정수 : '))
opcode = input('연산자 : ')
num2 = int(input('정수 : '))

if opcode == '+':
    res = num1 + num2
elif opcode == '-' :
    res = num1 - num2
elif opcode == '*' :
    res = num1 * num2
elif opcode == '/' :
    res = num1 / num2
else :
    opcode = '!'

if opcode == '!' :
    print('연산자가 잘못 입력되었습니다.')
else :
    print('%d %c %d = %.2f'%(num1, opcode, num2, res))
'''


'''
num1 = int(input('정수 : '))
opcode = input('연산자 : ')
num2 = int(input('정수 : '))

if opcode == '+' :
    print('%d + %d = %d'%(num1, num2, num1 + num2))
elif opcode == '-':
    print('%d - %d = %d'%(num1, num2, num1 - num2))
elif opcode == '*':
    print('%d * %d = %d'%(num1, num2, num1 * num2))
elif opcode == '/':
    print('%d / %d = %.2f'%(num1, num2, num1 / num2))
else :
    print('연산자가 잘못 입력되었습니다.')
'''
