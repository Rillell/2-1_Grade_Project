from tkinter import *

win = Tk()
win.title("윈도우연습")   #윈도우 제목
win.geometry("400x300")   #윈도우 크기
win.resizable(width = TRUE, height = FALSE)   #사이즈 조절 가능/불가능

photo1 = Photolmage(file = 'C:\Users\Administrator\Documents\소공과\2학년1학기수업자료\파이썬\그림\\제목 없음1.gif')
photo2 = Photolmage(file = 'C:\Users\Administrator\Documents\소공과\2학년1학기수업자료\파이썬\그림\\제목 없음1 - 복사본.gif')

'''lb1 = Label(win, text = "여기에 Label이 만들어짐", font=("궁서체",12), fg="blue", bg="red", anchor=SE, width = 50, height=6)
lb2 = Label(win, text = "파이썬", font=("굴림체",15), fg="yellow", bg="black", anchor=NW, width = 50, height=6)


lb.place(x=100, y=100)   #각 각 숫자만큼 이동한곳에 레이블 위치

lb.pack()   #레이블 표시

#lb.grid(row=0,column=0)

lb1.pack()
lb2.pack()  #위치 바꿀수 있음.
'''

lb1= Lable(win, image= photo1)
lb1= Lable(win, image= photo2)


lb1.pack(side=LEFT)
lb2.pack()


win.mainloop()
