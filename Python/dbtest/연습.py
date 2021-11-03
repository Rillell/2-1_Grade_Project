import sqlite3
import random
import sys

def sawonInput():
    con = sqlite3.connect("C:\\Users\\Administrator\\Documents\\소공과\\2학년1학기수업자료\\파이썬\\dbtest\\seoil1")
    cur = con.cursor()

    #cur.execute("create table sawon(Scode char(10) primary key, name char(20), one int, two int, three int, four int)") 

    while(True) :
        data1 = input("사원코드 : ")
        if data1 == str(0) :
            break
        
        data2 = input("성  명 : ")
        
        data3 = random.randint(7,21)
        data4 = random.randint(7,21)
        data5 = random.randint(7,21)
        data6 = random.randint(7,21)



        sql = 'insert into sawon values("'+data1+'", "'+data2+'",'+str(data3)+','+str(data4)+','+str(data5)+','+str(data6)+')'     
        cur.execute(sql)

    con.commit()
    con.close()

def dataCal(sData):
    summ = sum(list(sData))
    
    return summ, summ/len(sData)


def sawonView() :
    con = sqlite3.connect("C:\\Users\\Administrator\\Documents\\소공과\\2학년1학기수업자료\\파이썬\\dbtest\\seoil")
    cur = con.cursor()

    cur.execute("select * from sawon")


    print("="*63)
    print("코드\t 성명\t 1분기\t 2분기\t 3분기\t 4분기\t 합계\t 평균")
    print("-"*63)

    while (True) :
        row = cur.fetchone()
        summ, avg = dataCal(row[2:6])
        print("%s\t %s\t %d\t %d\t %d\t %d\t %s\t %0.2s\t" %(row[0],row[1],row[2],row[3],row[4],row[5],summ, avg))
        if row == None:
            break
        
    print("-"*63)

    con.close()




def SearchCode_Name() :
    con = sqlite3.connect("C:\\Users\\Administrator\\Documents\\소공과\\2학년1학기수업자료\\파이썬\\dbtest\\seoil")
    cur = con.cursor()
    ss = input("검색하고자 하는 사원코드(이름)을 입력하세요 : ")

    if ss.isalnum() :
        cur.execute('select * from sawon where Scode = "' +ss+'"')
        if ss.isalpha():
            cur.execute('select * from sawon where name = "' +ss+'"')
    


    print("="*63)
    print("코드\t 성명\t 1분기\t 2분기\t 3분기\t 4분기\t 합계\t 평균")
    print("-"*63)
    
    while(True) :
        row = cur.fetchone()
        if row == None :
            if row == None:                       
                print("사원코드(이름) %s은 존재하지 않습니다."%ss)
            break
        
        print("%s\t %s\t %d\t %d\t %d\t %d\t %d\t %0.2f\t" %(row[0],row[1],row[2],row[3],row[4],row[5],row[6],row[7]))
        
    print("-"*63)

    con.close()





def Search_MoreAvg() :
    con = sqlite3.connect("C:\\Users\\Administrator\\Documents\\소공과\\2학년1학기수업자료\\파이썬\\dbtest\\seoil")
    cur = con.cursor()
    ss2 = input("검색하고자 하는 평균값을 입력하세요 : ")
    if str(ss2) :
        cur.execute('select * from sawon where avg >= '+ss2)

                
    print("="*63)
    print("코드\t 성명\t 1분기\t 2분기\t 3분기\t 4분기\t 합계\t 평균")
    print("-"*63)
    
    while(True) :
        row = cur.fetchone()
        if row == None :
            print("평균값 %s이상의 데이터가 존재하지 않습니다."%ss2)
            break
        else :
            print("%s\t %s\t %d\t %d\t %d\t %d\t %d\t %0.2f\t" %(row[0],row[1],row[2],row[3],row[4],row[5],row[6],row[7])) 
    print("-"*63)

    con.close()



def sawonSearch() :
    print("\n\t[검   색]\n")
    sel = int(input(" 1. 사원코드(이름) 검색\n 2. 평균 이상 검색 \n 3. 종료 \n\n\t선택 :"))

    if sel == 1 :
        SearchCode_Name()      
    elif sel == 2 :
        Search_MoreAvg() 
    elif sel == 3:
          sys.exit(0)

    




print("="*28)
print("\t< 메뉴 >\n ")
sel = int(input("1.입력   2.조회   3. 검색 : "))

if sel == 1 :
    sawonInput()
elif sel == 2 :
    sawonView()
elif sel == 3 :
    sawonSearch()





