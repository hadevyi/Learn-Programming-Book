import turtle
import random

screen = turtle.Screen()
front = "front.gif"
back = "back.gif"

screen.addshape(front)
screen.addshape(back)

t = turtle.Turtle()
coin = random.randint(0,1)

if coin == 0:
    t.shape(front)
    t.stamp()
else :
    t.shape(back)
    t.stamp()