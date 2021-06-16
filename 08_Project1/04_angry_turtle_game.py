import turtle
import math

player = turtle.Turtle()
player.shape('turtle')
screen = player.getscreen()

def turnleft() :
    player.left(5)

def turnright() :
    player.right(5)

def fire() :
    x = 0
    y = 0
    velocity = 50
    angle = player.heading()
    vx = velocity * math.cos(angle * 3.1415 / 180.0)
    vy = velocity * math.sin(angle * 3.1415 / 180.0)

    while player.ycor() >= 0 :
        vx = vx
        vy -= 10
        x += vx
        y += vy
        player.goto(x, y)

screen.onkeypress(turnleft, "Left")
screen.onkeypress(turnright, "Right")
screen.onkeypress(fire, "space")
screen.listen()

turtle.done()