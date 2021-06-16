import random
import turtle
color = ["yellow", "orange", "white", "red", "purple", "blue", "skyblue"]

def draw_star(color, length, x, y) :
    t.up()
    t.goto(x, y)
    t.down()
    t.color(color, color)
    t.begin_fill()
    for i in range(5) :
        t.forward(length)
        t.right(144)
    t.end_fill()

t = turtle.Turtle()
t.speed(0)
turtle.bgcolor('black')

for i in range(20) :
    c = random.choice(color)
    l = random.randint(5, 200)
    x = random.randint(-300, 300)
    y = random.randint(-300, 300)
    draw_star(c, l, x, y)

turtle.done()