from tkinter import *
from tkinter import messagebox


def clickMouse(event) :
    txt = ''
    if event.num == 1 :
        txt += "마우스 왼쪽버튼이 ("
    elif event.num == 3 :
        txt += "마우스 오른쪽버튼이 ("

    txt += str(event.y)+ " . "+str(event.x)+")이서 클릭됨"
    lb1.configure(text = txt)

win = Tk()

lb1 = Label(win, text = "이곳이 바뀌")

win.bind("<Button>", clickMouse)

lb1.pack(expand = 1, anchor = CENTER)



'''def clickLeft(event):
    messagebox.showinfo("마우스","마우스의 왼쪽버튼이 클릭되었습니다")

win = Tk()

bt1 = Button(win, text = "마우스 왼쪽")

win.bind("<Button-1>", clickLeft)
bt1.pack
'''

win.mainloop()
