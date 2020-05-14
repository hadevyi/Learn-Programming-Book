from tkinter import *
import random
import time

bullets = []

WIDTH = 800
HEIGHT = 400

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

        if y1 <= 0 or y2 >= HEIGHT :
            self.yspeed = -self.yspeed
        

def fire(event) :
    bullets.append(Ball(canvas, "red", 10, 150, 250, 10, 0))

window = Tk()
canvas = Canvas(window, width = WIDTH, height = HEIGHT)
canvas.pack()
canvas.bind("<Button-1>", fire)

spaceship = Ball(canvas, "green", 100, 100, 200, 0, 0)
enemy = Ball(canvas, "red", 100, 500, 200, 0, 5)

while True :
    for bullet in bullets :
        bullet.move()

        if (bullet.x + bullet.size) >= WIDTH :
            canvas.delete(bullet.id)
            bullets.remove(bullet)
    
    enemy.move()
    window.update()
    time.sleep(0.03)