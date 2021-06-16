from tkinter import *

window = Tk()

nameL = Label(window, text = "이름")
nameL.grid(row = 0, column = 0, columnspan = 2)
nameE = Entry(window)
nameE.grid(row = 0, column = 2)

jobL = Label(window, text = "직업")
jobL.grid(row = 1, column = 0, columnspan = 2)
jobE = Entry(window)
jobE.grid(row = 1, column = 2)

nationL = Label(window, text = "국적")
nationL.grid(row = 2, column = 0, columnspan = 2)
nationE = Entry(window)
nationE.grid(row = 2, column = 2)

showB = Button(window, text = "Show")
showB.grid(row = 3, column = 0)

quitB = Button(window, text = "Quit")
quitB.grid(row = 3, column = 1)

window.mainloop()