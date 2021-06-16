from tkinter import *
from PIL import ImageTk, Image

def change_img() :
    path = inputBox.get()
    img = ImageTk.PhotoImage(Image.open(path))
    imageLabel.configure(image = img)
    imageLabel.image = img

window = Tk()

photo = ImageTk.PhotoImage(Image.open("wl.gif"))
imageLabel = Label(window, image = photo)
imageLabel.pack()

inputBox = Entry(window)
inputBox.pack()

button = Button(window, text = "Submit", command = change_img)
button.pack()

window.mainloop()
