from tkinter import *

window = Tk()

b1 = Button(window, text = "버튼1", bg = "red", fg = "white")
b1.place(x = 0, y = 0)

b2 = Button(window, text = "버튼2", bg = "green", fg = "black")
b2.place(x = 30, y = 30)

b3 = Button(window, text = "버튼3", bg = "blue", fg = "white")
b3.place(x = 60, y = 60)

b4 = Button(window, text = "버튼4", bg = "black", fg = "white")
b4.place(x = 90, y = 90)

b5 = Button(window, text = "버튼5", bg = "white", fg = "black")
b5.place(x = 120, y = 120)

window.mainloop()