import turtle

t = turtle.Turtle()
t.shape('turtle')
color = ["red", "blue", "yellow"]

def polygon(n, length) :
    for i in range(n) : 
        t.forward(length)
        t.left(360//n)

for i in range(10) :
    t.left(20)
    t.fillcolor(color[i%len(color)])
    t.begin_fill()
    polygon(6, 100)
    t.end_fill()

turtle.done()