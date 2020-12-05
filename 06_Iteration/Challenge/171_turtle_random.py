import turtle
import random

t = turtle.Turtle()
t.shape('turtle')

for i in range(30) :
    length = random.randint(1, 100)
    t.forward(length)
    ang = random.choice([90, 180, 270, 360])
    t.right(ang)

turtle.done()