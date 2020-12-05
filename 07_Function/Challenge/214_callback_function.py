import turtle

t = turtle.Turtle()
t.shape('turtle')

def drawit(x, y) :
    t.up()
    t.goto(x, y)
    t.down()
    t.begin_fill()
    t.color("green")
    t.circle(50)
    t.end_fill()

s = turtle.Screen()
s.onscreenclick(drawit)

turtle.done()