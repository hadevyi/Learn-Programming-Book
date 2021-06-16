import turtle

t = turtle.Turtle()
t.shape('turtle')

def square(length) :
    for i in range(4) :
        t.forward(length)
        t.left(90)

for i in range(3) :
    t.up()
    t.goto(i*150, 0)
    t.down()
    square(100)

turtle.done()