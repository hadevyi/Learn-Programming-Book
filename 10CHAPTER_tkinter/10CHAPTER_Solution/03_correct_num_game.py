from tkinter import *
import random

correct_num = random.randint(1, 100)

def ckeck() :
    global correct_num
    input_num = int(inputBox.get())

    if input_num > correct_num :
        result["text"] = "값이 큽니다!"
    elif input_num < correct_num :
        result["text"] = "값이 작습니다!"
    else :
        result["text"] = "정답입니다!"

def restart() :
    global correct_num
    correct_num = random.randint(1, 100)
    result["text"] = "숫자 맞추기 게임을 시작합니다."
    inputBox.delete(0, END)

window = Tk()

result = Label(window, text = "숫자 맞추기 게임을 시작합니다.")
result.grid(row = 0, column = 0, columnspan = 2)

inputBox = Entry(window)
inputBox.grid(row = 1, column = 0, columnspan = 2)

checkB = Button(window, text = "숫자를 입력", command = ckeck)
checkB.grid(row = 2, column = 0)

restartB = Button(window, text = "게임을 다시 실행", command = restart)
restartB.grid(row = 2, column = 1)

window.mainloop()