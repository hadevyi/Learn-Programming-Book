from tkinter import *

total = 0

def sum() :
    global total
    num = int(inputBox.get())
    total += num
    now_total["text"] = str(total)

def sub() :
    global total
    num = int(inputBox.get())
    total -= num
    now_total["text"] = str(total)

def clean() :
    global total
    total = 0
    now_total["text"] = "0"
    inputBox.delete(0, END)

window = Tk()

title = Label(window, text = "현재 합계")
title.grid(row = 0, column = 0)

now_total = Label(window, text = "0")
now_total.grid(row = 0, column = 1, columnspan = 2)

inputBox = Entry(window)
inputBox.grid(row = 1, column = 0, columnspan = 3)

sumB = Button(window, text = "더하기(+)", command = sum)
sumB.grid(row = 2, column = 0)

subB = Button(window, text = "빼기(-)", command = sub)
subB.grid(row = 2, column = 1)

cleanB = Button(window, text = "초기화", command = clean)
cleanB.grid(row = 2, column = 2)

window.mainloop()