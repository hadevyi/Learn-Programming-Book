import turtle
from turtle import *

class MyTurtle(Turtle) :
    def glow(self, x, y) :
        self.fillcolor("red")

t = MyTurtle()
t.shape("turtle")
t.onclick(t.glow)

turtle.done()