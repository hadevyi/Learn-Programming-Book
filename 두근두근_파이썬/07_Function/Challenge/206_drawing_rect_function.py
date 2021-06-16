import turtle

t = turtle.Turtle()
t.shape('turtle')

color = ["red", "blue", "yellow"]

def square(length) :
    for i in range(6) :
        t.forward(length)
        t.left(360/6)

for i in range(3) :
    t.up()
    t.goto(i*150, 0)
    t.down()
    t.color(color[i])
    square(100)

turtle.done()