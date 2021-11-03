from tkinter import *
from tkinter import messagebox

'''def button_click():
    messagebox.showinfo("정보","버튼이 클릭되었어요")


win = Tk()
win.title("윈도우연습")   #윈도우 제목
win.geometry("400x300")   #윈도우 크기


bt1 = Button(win, text="종료", command=button_click)

bt1.pack()

win.mainloop()
'''


def myFunc():
    if chk.get() == 0 :
        messagebox.showinfo("", "체크버튼이 꺼졌어요")
    else:
        messagebox.showinfo("", "체크버튼이 켜졌어요")

win = Tk()

chk = IntVar()
cb1 = Checkbutton(win, text= "클릭하세요", variable= chk, command = myFunc)

cb1.pack()

win.mainloop()
