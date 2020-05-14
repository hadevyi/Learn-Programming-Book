import tkinter as tk
from PIL import Image, ImageTk, ImageFilter
from tkinter import filedialog as fd

im = None
tk_img = None

def open() :
    global im, tk_img

    filename = fd.askopenfilename()
    im = Image.open(filename)

    tk_img = ImageTk.PhotoImage(im)
    canvas.create_image(250, 250, image = tk_img)    
    window.update()

def quit() :
    window.quit()

def image_rotate() :
    global im, tk_img
    out = im.rotate(45)

    tk_img = ImageTk.PhotoImage(out)
    canvas.create_image(250, 250, image = tk_img)
    window.update()

def image_blur() :
    global im, tk_img
    out = im.filter(ImageFilter.BLUR)

    tk_img = ImageTk.PhotoImage(out)
    canvas.create_image(250, 250, image = tk_img)
    window.update()

window = tk.Tk()
canvas = tk.Canvas(window, width = 500, height = 500)
canvas.pack()

menubar = tk.Menu(window)
filemenu = tk.Menu(menubar)
ipmenu = tk.Menu(menubar)

filemenu.add_command(label = "열기", command = open)
filemenu.add_command(label = "종료", command = quit)
ipmenu.add_command(label = "영상회전", command = image_rotate)
ipmenu.add_command(label = "영상흐리게", command = image_blur)
menubar.add_cascade(label = "파일", menu = filemenu)
menubar.add_cascade(label = "영상처리", menu = ipmenu)

window.config(menu = menubar)
window.mainloop()