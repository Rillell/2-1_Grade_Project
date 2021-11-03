import sqlite3


def Finsert():
    con = sqlite3.connect("C:\\Users\\Administrator\\Documents\\소공과\\2학년1학기수업자료\\파이썬\\dbtest\\mydb")
    cur = con.cursor()


    #cur.execute("create table student(hakbun int primary key, name char(20))")
    #cur.execute('insert into student values(100, "홍길동")')

    while(True) :
        data1 = int(input("학번 : "))
        if data1 == 0 :
            break
        data2 = input("성명 : ")

        sql = 'insert into student values('+str(data1)+', "'+ data2+'")'
             #'insert into student values(100, "홍길동")'
        cur.execute(sql)



    con.commit()  #실행종료
    con.close()

def FSelect():
    con = sqlite3.connect("C:\\Users\\Administrator\\Documents\\소공과\\2학년1학기수업자료\\파이썬\\dbtest\\mydb")
    cur = con.cursor()

    cur.execute("select * from student")

    print("="*16)
    print(" 학번 \t 성명")
    print("-"*16)

    while(True):
        row = cur.fetchone()
        if row == None:
            break
        print("%5d\t %s"%(row[0], row[1]))
    print("-"*16)

    con.close()

def FSelect1() :
    con = sqlite3.connect("C:\\Users\\Administrator\\Documents\\소공과\\2학년1학기수업자료\\파이썬\\dbtest\\mydb")
    cur = con.cursor()
    ss = input("조건 : ")

    if ss.isdigit() :
        cur.execute('select * from student where hakbun = '+ss)
    else :
        cur.execute('select * from student where name = "' +ss+'"')

    print("="*16)
    print(" 학번 \t 성명")
    print("-"*16)

    while(True):
        row = cur.fetchone()
        if row == None:
            break
        print("%5d\t %s"%(row[0], row[1]))
    print("-"*16)

    con.close()




print("="*20)
print("    메뉴 ")
sel = int(input("1.입력   2.조회   3.조회(조건)   4.수정   5.삭제 : "))

if sel == 1 :
    Finsert()
elif sel == 2 :
    FSelect()
elif sel == 3 :
    FSelect1()
