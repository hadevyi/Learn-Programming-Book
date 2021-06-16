import turtle

def draw(x, y) :
    t.goto(x,y)

t = turtle.Turtle()
t.shape('turtle')
t.pensize(10)

s = turtle.Screen()
s.onscreenclick(draw)

s.onkey(t.up, "Up")
s.onkey(t.down, "Down")
s.listen()

turtle.done()