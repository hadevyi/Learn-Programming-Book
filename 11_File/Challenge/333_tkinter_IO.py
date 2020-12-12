# -*- coding: cp949 -*- 
import os
import pickle
from tkinter import *
from tkinter import messagebox

# 고정값
NAMEINDEX = 0       # 이름 인덱스
PHONEINDEX = 1      # 핸드폰 번호 인덱스

filename = "phone_book.dat"
now_turn = 0        # 1 ~ len(dictionary), 버튼마다 유동적으로
size = 0            # 1 ~ len(dictionary), 추가나 삭제가 없는 이상 값 유지
obj = {}

def add() :
    global size, now_turn, obj
    name = nameE.get()
    phone = phoneE.get()

    size += 1
    now_turn += 1

    out_file = open(filename, "wb")
    obj[size] = [name, phone]
    pickle.dump(obj, out_file)
    out_file.close()

def frist() :
    global now_turn
    now_turn = 1
    setEntry(now_turn)

def after() :
    global now_turn

    if now_turn == size :
        now_turn = 1
    else :
        now_turn += 1

    setEntry(now_turn)

def before() :
    global now_turn

    if now_turn == 1 :
        now_turn = size
    else :
        now_turn -= 1
        
    setEntry(now_turn)

def end() :
    global now_turn
    now_turn = size
    setEntry(now_turn)

def fileread() :
    global size, now_turn, obj
    
    if getIsFile() :
        infile = open(filename, "rb")
        obj = pickle.load(infile)
        size = len(obj)
        now_turn = size
        infile.close()
        setEntry(1)

def getIsFile() :
    if os.path.isfile(filename) :
        return True
    else :
        messagebox.showinfo("정보", filename + "이 없습니다.")
        return False

def setEntry(turn) :
    name = obj[turn][NAMEINDEX]
    phone = obj[turn][PHONEINDEX]
    nameE.delete(0, END)
    phoneE.delete(0, END)
    nameE.insert(0, name)
    phoneE.insert(0, phone)

window = Tk()

nameL = Label(window, text = "이름")
nameL.grid(row = 0, column = 0, columnspan = 2)
nameE = Entry(window)
nameE.grid(row = 0, column = 2, columnspan = 4)

phoneL = Label(window, text = "전화번호")
phoneL.grid(row = 1, column = 0, columnspan = 2)
phoneE = Entry(window)
phoneE.grid(row = 1, column = 2, columnspan = 4)

addB = Button(window, text = "추가", command = add)
addB.grid(row = 2, column = 0)

fristB = Button(window, text = "처음", command = frist)
fristB.grid(row = 2, column = 1)

afterB = Button(window, text = "다음", command = after)
afterB.grid(row = 2, column = 2)

beforeB = Button(window, text = "이전", command = before)
beforeB.grid(row = 2, column = 3)

endB = Button(window, text = "마지막", command = end)
endB.grid(row = 2, column = 4)

loadfileB = Button(window, text = "파일 읽기", command = fileread)
loadfileB.grid(row = 2, column = 5)

window.mainloop()