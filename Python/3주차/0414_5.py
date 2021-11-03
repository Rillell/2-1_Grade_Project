#입력된 수가 소수인지 아닌지 구하시오
#소수 : 2 ~ n - 1까지의 수로는 나누어 지지 않는 수

num = int(input('정수 : '))

for i in range (2, num, 1) :
    if num % i == 0:
        break

if num == i + 1 :
    print('소수')
else :
    print('소수가 아닙니다.')
