from tkinter import *
from tkinter import messagebox


'''def Keybind(event) :
    messagebox.showinfo("","키가 눌렸습니다")


win = Tk()

ent = Entry(win, width=10)
ent.pack()
            

ent.bind("<Key>", Keybind)'''


def myOpen():
    messagebox.showinfo("열기","파일이 열렸습니다.")

win = Tk()
mainMenu = Menu(win)
win.config(menu=mainMenu)

fileMenu = Menu(mainMenu)
mainMenu.add_cascade(label = "파일", menu = fileMenu)
fileMenu.add_command(label = "열기", command=myOpen)
fileMenu.add_separator()
fileMenu.add_command(label="종료")

win.mainloop()
