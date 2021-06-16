import turtle

def draw_line() :
    t.forward(100)
    t.backward(100)

t = turtle.Turtle()
t.shape('turtle')

for i in range(12) :
    draw_line()
    t.right(360//12)
    
turtle.done()