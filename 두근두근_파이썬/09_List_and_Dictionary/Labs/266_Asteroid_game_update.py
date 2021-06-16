import turtle
import random
import math

player = turtle.Turtle()
player.shape('turtle')
player.color('blue')
player.up()
player.speed(0)
screen = player.getscreen()

astroids = []

for i in range(10) :
    a1 = turtle.Turtle()
    a1.color('red')
    a1.shape('circle')
    a1.up()
    a1.speed(0)
    a1.goto(random.randint(-300,300), random.randint(-300, 300))
    astroids.append(a1)

def turn_left() :
    player.left(30)

def turn_right() : 
    player.right(30)

screen.onkeypress(turn_left, "Left")
screen.onkeypress(turn_right, "Right")
screen.listen()

def play() :
    player.forward(2)
    for a in astroids :
        a.right(random.randint(-180, 180))
        a.forward(2)
    screen.ontimer(play, 10)

screen.ontimer(play, 10)
turtle.mainloop()