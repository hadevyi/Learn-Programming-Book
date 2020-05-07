from tkinter import *

def click(key) :
    if key == "=" :
        result = eval(display.get())
        s = str(result)
        display.insert(END, "=" + s)
    else :
        display.insert(END, key)

window = Tk()
window.title("My Calculator")
display = Entry(window, width=33, bg="yellow")
display.grid(row = 0, column = 0, columnspan = 5)

button_list = ['7', '8', '9', '/', 'C', 
                '4', '5', '6', '*', ' ', 
                '1', '2', '3', '-', ' ',
                '0', '.','=', '+', ' ']

row_index = 1
col_index = 0

for button_text in button_list :
    def process(t = button_text) :
        click(t)
    Button(window, text = button_text, width = 5, command = process).grid(row = row_index, column = col_index)
    col_index += 1

    if col_index > 4 :
        row_index += 1
        col_index = 0

window.mainloop()