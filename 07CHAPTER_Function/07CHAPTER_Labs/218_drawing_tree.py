import turtle

def tree(length) :
    if length > 5 :
        t.forward(length)
        t.right(20)
        tree(length-15)
        t.left(40)
        tree(length-15)
        t.right(20)
        t.backward(length)

t = turtle.Turtle()
t.left(90)

t.color("green")
t.speed(1)
tree(90)

turtle.done()