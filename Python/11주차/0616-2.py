from tkinter import *
win = Tk()

btnList = [None]*9

F1 = Frame(win, width = 200, height = 80, bg= "red")
F2 = Frame(win, width = 200, height = 150, bg= "blue")


F1.grid(row = 0, column= 0)
F2.grid(row = 1, column= 0)

lb = Label(F1, width=25, height=2,anchor=E)
lb.place(x=12, y = 12)

for i in range(0,9):
    btnList[i] = Button(win, text=str(i+1), width = 7, height=2)

inx = 0
xpos,ypos = 10,10

for i in range(0,3):
    for j in range(0,3) :
        btnList[inx].place(x=xpos, y = ypos)
        inx+=1
        xpos += 60
    xpos = 10
    ypos +=50


win.mainloop()
