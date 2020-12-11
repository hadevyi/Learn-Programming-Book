from tkinter import *

window = Tk()

label = Label(window, text = "간단한 GUI 프로그램!")
label.pack()

hello_button = Button(window, text = "환영합니다.")
hello_button.pack()

exit_button = Button(window, text = "종료")
exit_button.pack()

window.mainloop()