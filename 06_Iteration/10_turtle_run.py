import turtle

t = turtle.Turtle()
t.shape('turtle')

n = 0

while n < 5 :
    t.forward(300)
    t.right(90)
    t.forward(30)
    t.right(90)
    t.forward(300)
    t.left(90)
    t.forward(30)
    t.left(90)

    n += 1