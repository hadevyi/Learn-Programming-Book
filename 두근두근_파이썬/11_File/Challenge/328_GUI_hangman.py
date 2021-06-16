# -*- coding: cp949 -*- 
import string
import random
from tkinter import *
from tkinter import messagebox
from PIL import ImageTk, Image

alpha = list(string.ascii_lowercase)
file_name = "hangman_00.png"
word_list = []                          # file에서 찾은 word 단어 리스트
word = ""                               # 정답이 되는 word (Setting 후 reset까지 고정값)
now_find = ""                           # 지금까지 찾는 상황 (매 버튼마다 달라짐)
try_count = 10

def word_setting() :
    global word, now_find, try_count, file_name
    word = random.choice(word_list)
    now_find = "_ " * len(word)
    word_space["text"] = now_find

    try_count = 10
    try_label["text"] = try_count
    qustion_label["text"] = "Setting Complete"
    
    file_name = F"hangman_00.png"
    now_Image = ImageTk.PhotoImage(Image.open(file_name))
    image_label.configure(image = now_Image)
    image_label.image = now_Image

def click(key) :
    global now_find, try_count, file_name    

    if try_count == 0 :
        messagebox.showinfo("Done", "number of try is Done!\nPlz, Start new game")
    else :
        try_count -= 1

        if key in word :
            temp = ""
            result = ""

            for char in word :
                if char == key :
                    temp += key + " "
                else :
                    temp += "_ "
            
            for i in range(len(now_find)) :
                if 'a' <= now_find[i] <= 'z' :
                    result += now_find[i]
                else :
                    result += temp[i]

            now_find = result
            word_space["text"] = now_find
        else :
            num = int(file_name.split("_")[1][0:2]) + 1
            num = str(num)
            file_name = F"hangman_{num.zfill(2)}.png"
            now_Image = ImageTk.PhotoImage(Image.open(file_name))
            image_label.configure(image = now_Image)
            image_label.image = now_Image

        if "_" not in now_find :
            messagebox.showinfo("Congratulations!", "You got it right!")
        
        try_label["text"] = try_count


window = Tk()

infile = open("word.txt", "r", encoding="UTF8")

for line in infile :
    line = line.rstrip()
    word_list.append(line)

qustion_title = Label(window, text = "Word Setting :", font = ('Helvetica', 9, 'bold'))
qustion_title.grid(row = 0, column = 0, columnspan = 3)

qustion_label = Label(window, text = "Not Yet")
qustion_label.grid(row = 0, column = 3, columnspan = 3)

try_number = Label(window, text = "Number of try : ", font = ('Helvetica', 9, 'bold'))
try_number.grid(row = 0, column = 6, columnspan = 3)

try_label = Label(window, text = "0")
try_label.grid(row = 0, column = 9, columnspan = 3)

default_image = ImageTk.PhotoImage(Image.open(file_name))
image_label = Label(window, image = default_image, width = 297, height = 419)
image_label.grid(row = 1, column = 0, columnspan = 12)

word_space = Label(window, text = "", font = ('Helvetica', 12), height = 2)
word_space.grid(row = 2, column = 0, columnspan = 12)

word_setting_button = Button(window, text = "Word Setting (Game Start)", width = 45, command = word_setting)
word_setting_button.grid(row = 3, column = 0, columnspan = 10)

row_index = 3
col_index = 10

for alpha_char in alpha :
    def process(t = alpha_char) :
        click(t)
    Button(window, text = alpha_char, width = 3, command=process).grid(row = row_index, column = col_index)
    col_index += 1

    if col_index > 11 :
        row_index += 1
        col_index = 0

window.mainloop()