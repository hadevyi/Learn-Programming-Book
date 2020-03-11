from tkinter import *

def process() :
    temperature = float(e1.get())
    mytemp = (temperature-32)*5/9
    e2.insert(0, str(mytemp))

window = Tk()

l1 = Label(window, text="화씨")
e1 = Entry(window)
l1.grid(row=0, column=0)
e1.grid(row=0, column=1)

l2 = Label(window, text="섭씨")
e2 = Entry(window)
l2.grid(row=1, column=0)
e2.grid(row=1, column=1)

b1 = Button(window, text="화씨->섭씨", command=process)
b2 = Button(window, text="섭씨->화씨")
b1.grid(row=2, column=0)
b2.grid(row=2, column=1)

window.mainloop()