from tkinter import *
import time

class Ball :
    def __init__(self, canvas, color, size, x, y, xspeed, yspeed) :
        self.canvas = canvas
        self.color = color
        self.size = size
        self.x = x
        self.y = y
        self.xspeed = xspeed
        self.yspeed = yspeed
        self.id = canvas.create_oval(x, y, x + size, y + size, fill = color)
    
    def move(self) :
        self.canvas.move(self.id, self.xspeed, self.yspeed)
        (x1, y1, x2, y2) = self.canvas.coords(self.id)
        (self.x, self.y) = (x1, y1)

        if x1 <= 0 or x2 >= WIDTH :
            self.xspeed = -self.xspeed

WIDTH = 800
HEIGHT = 400

window = Tk()
canvas = Canvas(window, width = WIDTH, height = HEIGHT)
canvas.pack()
ball = Ball(canvas, "red", 30, 0, 0, 10, 0)

while True :
    ball.move()
    window.update()
    time.sleep(0.03)