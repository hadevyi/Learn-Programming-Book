import turtle

def drawHexa() :
    for i in range(6) :
        t.forward(100)
        t.left(60)

t = turtle.Turtle()
t.shape("turtle")

for i in range(6) :
    t.forward(100)
    t.right(60)
    drawHexa()