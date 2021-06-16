import turtle
import math

t = turtle.Turtle()
t.shape('turtle')

for i in range(360) :
    sin_x = math.sin(math.pi * i / 180.0)
    t.goto(i, sin_x * 100)