import turtle

t = turtle.Turtle()
t.color("red")
t.shape('turtle')
n = 0

while n < 10 :
    t.forward(100)
    t.right(135)
    t.forward(141)
    t.right(135)
    t.forward(100)
    t.right(90)
    t.left(10)
    n += 1

turtle.done()