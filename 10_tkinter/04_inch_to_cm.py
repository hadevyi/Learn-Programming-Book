from tkinter import *

def execute() :
    inch = int(inputBox.get())
    cm = inch * 2.54
    resultV["text"] = str(cm) + "센티미터"

window = Tk()

title = Label(window, text = "인치를 센티미터로 변환하는 프로그램")
title.grid(row = 0, column = 0, columnspan = 2)

announ = Label(window, text = "인치를 입력하시오 : ")
announ.grid(row = 1, column = 0)

inputBox = Entry(window)
inputBox.grid(row = 1, column = 1)

resultL = Label(window, text = "변환결과 : ")
resultL.grid(row = 2, column = 0)

resultV = Label(window, text = "결과값이 출력됩니다.")
resultV.grid(row = 2, column = 1)

run = Button(window, text = "변환", command = execute)
run.grid(row = 3, column = 1)

window.mainloop()