from tkinter import *

window = Tk()

w = Label(window, text = "박스 #1", bg = "red", fg = "white")
w.place(x = 0, y = 0)
w = Label(window, text = "박스 #2", bg = "green", fg = "black")
w.place(x = 20, y = 20)
w = Label(window, text = "박스 #3", bg = "blue", fg = "white")
w.place(x = 40, y = 40)

window.mainloop()