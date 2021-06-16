from tkinter import *

def process() :
    print("안녕하세요?")

window = Tk()
button = Button(window, text="클릭하세요!", command=process)
button.pack()

window.mainloop()