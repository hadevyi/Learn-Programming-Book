import random
import turtle
color = ["yellow", "red", "purple", "blue"]

def draw_square(x, y, color) :
    t.up()
    t.goto(x, y)
    t.down()
    t.color('black', color)
    t.begin_fill()
    for i in range(4) :
        t.forward(100)
        t.right(90)
    t.end_fill()

t = turtle.Turtle()
t.shape('turtle')

for c in color :
    x = random.randint(-300, 300)
    y = random.randint(-300, 300)
    draw_square(x, y, c)

turtle.done()