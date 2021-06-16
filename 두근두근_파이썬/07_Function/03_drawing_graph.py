import turtle

def function() :
    for i in range(150) :
        y = (i**2 + 1) * 0.01

        if y < 150 :
            t.goto(i, y)

t = turtle.Turtle()
t.shape('turtle')

t.forward(150)
t.backward(150)
t.left(90)
t.forward(150)
t.backward(150)
t.right(90)

function()

turtle.done()