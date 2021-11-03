#난수 만들기


import random

'''for i in range(0, 100, 1) :
    print(int(random.random()*100)+10)
'''

'''for i in range(0, 7, 1) :
    #print(random.randint(-5,10))
    print(random.randrange(1, 10, 3))'''


#print(random.choice([1,2,3,4,5]))

lst = random.sample(range(1,46), 6)
print(lst)
lst.sort()
print(lst)

random.shuffle(lst)

#가위(1), 바위(2) 보(3) 게임 만들기
#컴1과 컴2가 서로 가위바위보 게임을 50번 하여 승률 계산하여 출력하기

#레포트는 dreamace@seoil.ac.kr
#파일은 학번_이름.py
