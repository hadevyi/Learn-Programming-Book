import turtle

def maze(x, y) :
    for i in range(2) :
        t.up()

        if i == 1 :
            t.goto(x + 100, y + 100)
        else :
            t.goto(x, y)
        
        t.down()

        t.forward(300)
        t.right(90)
        t.forward(300)
        t.left(90)
        t.forward(300)

def turn_left() :
    t.left(10)
    t.forward(10)

def turn_right() :
    t.right(10)
    t.forward(10)

t = turtle.Turtle()
s = turtle.Screen()
t.shape('turtle')
t.speed(0)

maze(-300, 200)
s.onkey(turn_left, "Left")
s.onkey(turn_right, "Right")

t.up()
t.goto(-300, 250)
t.speed(1)
t.down()

s.listen()
s.mainloop()

turtle.done()