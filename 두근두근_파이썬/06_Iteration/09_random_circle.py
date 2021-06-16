import turtle
import random

t = turtle.Turtle()
t.shape('turtle')

n = 0

while n < 10 :
    radius = random.randint(1, 100)
    x = random.randint(-300, 300)
    y = random.randint(-300, 300)

    t.up()
    t.goto(x, y)
    t.down()
    t.circle(radius)

    n += 1