ss = '1234'
ss1 = 'asdf'
ss2 = '서일a123'
ss3 = 'seoil'
ss4 = '  '

print(ss.isdigit()) #문자열이 숫자로만 구성되어 있는지(소숫점은 포함X)

print(ss1.isalpha()) #한글 포함 문자로만 이루어져 있는지(띄어쓰기 포함X)

print(ss2.isalnum()) #문자와 숫자가 섞여 있는지

print(ss3.islower()) #문자가 소문자로만(영어만 포함 한글은 false)

print(ss3.isupper()) #문자가 대문자로만(영어만 포함 한글은 false)

print(ss4.isspace()) #띄어쓰기가 있는지 ''는 false가 나온다.



'''
ss= '서일대학교123'

s1 = ''       
s2 = ''         #A = 65, a= 97

if ss.isalnum() :
    for v in ss :
        if ord(v) >= ord('0') and ord(v) <= ord('9') :
            s2 += v
        else :
            s1 += v

print(s1)
print(s2)
'''
