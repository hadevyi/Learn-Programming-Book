import turtle

t = turtle.Turtle()
t.shape("turtle")

for i in range(3) :
    t.forward(100)
    t.left(360/3)

t.up()
t.goto(200, 0)
t.down()

for i in range(4) :
    t.forward(100)
    t.left(360/4)

turtle.done()