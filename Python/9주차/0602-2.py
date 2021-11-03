#입력받은 값이 정수(실수)인지 아닌지 판단하여 정수(실수)로 변환 10을 더하는 코드

ss = input("문자 입력 : ")

if ss.count('.') == 0 :
    if ss.isdigit() :
        res = int(ss) + 10
    else :
        res ="입력받은 값은 변환할수 없습니다"
elif ss.count('.') == 1 :
    lst = ss.split('.')
    if lst[0].isdigit() and lst[1].isdigit() : #정수부분이 숫자로만 소수부분이 숫자로만 구성되어 있는지
        res = float(ss) + 10
    else :
        res ="입력받은 값은 변환할수 없습니다"
else :
    res ="입력받은 값은 변환할수 없습니다"

print(res)

  
