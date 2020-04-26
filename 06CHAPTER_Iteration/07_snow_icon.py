import turtle

t = turtle.Turtle()
t.color("blue")
t.shape('turtle')

for i in range(6) :
    t.forward(100)
    t.forward(-30)
    t.left(60)
    t.forward(30)
    t.forward(-30)
    t.right(120)
    t.forward(30)
    t.forward(-30)
    t.left(60)
    t.forward(-70)
    t.right(60)

turtle.done()