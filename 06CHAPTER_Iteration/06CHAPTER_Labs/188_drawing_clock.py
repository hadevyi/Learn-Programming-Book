import turtle

t = turtle.Turtle()
t.shape('turtle')
t.color('red')
t.stamp()
move = 30

for i in range(12) :
    t.up()
    t.forward(50)
    t.down()
    t.forward(25)
    t.up()
    t.forward(15)
    t.down()
    t.stamp()
    t.up()
    t.home()
    t.right(move)
    move += 30