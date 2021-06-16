import turtle

data = [120, 56, 309, 220, 156, 23, 98]

def drawBar(height) :
    t.begin_fill()
    t.left(90)
    t.forward(height)
    t.write(str(height))
    t.right(90)
    t.forward(40)
    t.right(90)
    t.forward(height)
    t.right(90)
    t.forward(40)
    t.right(180)
    t.forward(40)
    t.end_fill()

t = turtle.Turtle()
t.color('blue')
t.fillcolor('red')

t.pensize(3)

for d in data :
    drawBar(d)