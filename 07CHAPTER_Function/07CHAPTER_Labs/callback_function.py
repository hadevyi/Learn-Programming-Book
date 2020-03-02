import turtle

t = turtle.Turtle()
t.shape('turtle')

def drawit(x, y) :
    t.up()
    t.goto(x, y)
    t.down()
    t.begin_fill()
    t.color("green")
    square(50)
    t.end_fill()

def square(length) :
    for i in range(4) :
        t.forward(length)
        t.right(90)

s = turtle.Screen()
s.onscreenclick(drawit)

turtle.done()