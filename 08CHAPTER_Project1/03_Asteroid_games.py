import turtle
import random
import math

def turnleft() :
    player.left(30)

def turnright() :
    player.right(30)

def play() :
    player.forward(2)
    a1.forward(2)
    a2.forward(2)
    screen.ontimer(play, 10)

player = turtle.Turtle()
player.color('blue')
player.shape('turtle')
player.up()
player.speed()
screen = turtle.Screen()

a1 = turtle.Turtle()
a1.color('red')
a1.shape('circle')
a1.up()
a1.speed(0)
a1.goto(random.randint(-300, 300), random.randint(-300, 300))

a2 = turtle.Turtle()
a2.color('red')
a2.shape('circle')
a2.up()
a2.speed(0)
a2.goto(random.randint(-300, 300), random.randint(-300, 300))

screen.onkeypress(turnleft, "Left")
screen.onkeypress(turnright, "Right")
screen.ontimer(play, 10)
screen.listen()

turtle.done()