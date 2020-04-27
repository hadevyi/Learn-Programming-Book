from tkinter import *
from PIL import ImageTk, Image
import random

computer_command = "default"
user_command = "default"

def rock() :
    global user_command
    now_Image = ImageTk.PhotoImage(Image.open("rock.jpg"))
    outU_I.configure(image = now_Image)
    outU_I.image = now_Image
    user_command = "rock"
    auto_RSP()

def scissors() :
    global user_command
    now_Image = ImageTk.PhotoImage(Image.open("scissors.jpg"))
    outU_I.configure(image = now_Image)
    outU_I.image = now_Image
    user_command = "scissors"
    auto_RSP()

def paper() :
    global user_command
    now_Image = ImageTk.PhotoImage(Image.open("paper.jpg"))
    outU_I.configure(image = now_Image)
    outU_I.image = now_Image
    user_command = "paper"
    auto_RSP()

def auto_RSP() :
    global computer_command
    ran = random.randint(0,2)

    if ran == 0 :
        now_Image = ImageTk.PhotoImage(Image.open("rock.jpg"))
        outC_I.configure(image = now_Image)
        outC_I.image = now_Image
        computer_command = "rock"
    elif ran == 1 :
        now_Image = ImageTk.PhotoImage(Image.open("scissors.jpg"))
        outC_I.configure(image = now_Image)
        outC_I.image = now_Image
        computer_command = "scissors"
    elif ran == 2 :
        now_Image = ImageTk.PhotoImage(Image.open("paper.jpg"))
        outC_I.configure(image = now_Image)
        outC_I.image = now_Image
        computer_command = "paper"
    
    who_win()

def who_win() :
    if computer_command == user_command :
        resultS["text"] = "========"
        result_anno["text"] = "컴퓨터-유저 비김"
    elif (computer_command == "scissors" and user_command == "rock") or (computer_command == "rock" and user_command == "paper") or (computer_command == "paper" and user_command == "scissors") :
        resultS["text"] = "<<<<<<<<"
        result_anno["text"] = "유저 승"
    else :
        resultS["text"] = ">>>>>>>>"
        result_anno["text"] = "유저 패"

window = Tk()

computerL = Label(window, text = "컴퓨터의 결정")                               # computer Label
computerL.grid(row = 0, column = 0)

userL = Label(window, text = "유저의 결정")                                     # user Label
userL.grid(row = 0, column = 2)

default_Image = ImageTk.PhotoImage(Image.open("bg.png"))                        # default computer Image

outC_I = Label(window, image = default_Image, width = 200, height = 300)        # output Computer Image 
outC_I.grid(row = 1, column = 0)

resultS = Label(window, text = "", fg = "green", font = "bold", width = 30)                                   # result Symbol
resultS.grid(row = 1, column = 1)

outU_I = Label(window, image = default_Image, width = 200, height = 300)         # ouput User Image
outU_I.grid(row = 1, column = 2)

result_anno = Label(window, text = "", font = "16", fg = "green", height = 5)
result_anno.grid(row = 2, column = 1)

scissorsB = Button(window, text = "가위", command = scissors)
scissorsB.grid(row = 3, column = 0)

rockB = Button(window, text = "바위", command = rock)
rockB.grid(row = 3, column = 1)

paperB = Button(window, text = "보", command = paper)
paperB.grid(row = 3, column = 2)

window.mainloop()