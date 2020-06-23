from tkinter import *

mycolor = 'blue'

def MouseDraw(event) :
    global x1, y1
    canvas.create_line(x1, y1, event.x, event.y, fill = mycolor)
    x1, y1 = event.x, event.y

def MouseDown(event) :
    global x1, y1
    x1, y1 = event.x, event.y

def MouseUp(event) :
    global x1, y1

    if (x1, y1) == (event.x, event.y) :
        canvas.create_line(x1, y1, x1 + 1, y1 + 1, fill = mycolor)

def change_red() :
    global mycolor
    mycolor = 'red'

def change_green() :
    global mycolor
    mycolor = 'green'

def change_yellow() :
    global mycolor
    mycolor = 'yellow'

window = Tk()
canvas = Canvas(window)
canvas.pack()
canvas.bind("<B1-Motion>", MouseDraw)
canvas.bind("<Button-1>", MouseDown)
canvas.bind("<ButtonRelease-1>", MouseUp)

redButton = Button(window, text = "빨간색", command = change_red)
redButton.pack()
greenButton = Button(window, text = "초록색", command = change_green)
greenButton.pack()
yellowButton = Button(window, text = "노란색", command = change_yellow)
yellowButton.pack()

window.mainloop()