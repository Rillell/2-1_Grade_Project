num10 = 0
sel = int(input("입력진수 : "))
num = input("값 입력 : ")

if sel == 16 :
    num10 = int(num, 16)
if sel == 10 :
    num10 = int(num, 10)
if sel == 8 :
    num10 = int(num, 8)
if sel == 2 :
    num10 = int(num, 2)

if num10 == 0:
    print("입력진수는 16, 10, 8, 2 진수여야 합니다")
else :
    print("16 : ", hex(num10))
    print("10 : %d"% num10)
    print("8 : ", oct(num10))    
    print("2 : ", bin(num10))     
