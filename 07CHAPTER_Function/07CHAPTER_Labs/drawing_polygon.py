import turtle

t = turtle.Turtle()
t.shape('turtle')

def polygon(n, length) :
    for i in range(n) : 
        t.forward(length)
        t.left(360//n)

for i in range(10) :
    t.left(20)
    polygon(6, 100)