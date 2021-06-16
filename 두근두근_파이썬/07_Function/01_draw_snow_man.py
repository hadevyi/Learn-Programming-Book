import turtle

size = [25, 15, 50]
height = [110, 90, 0]
arm = [[-20, -60], [20, 60]]

x = [-200, 0, 200]
y = -100

def drawSnowman(x, y) :
    for i in range(3) :
        t.begin_fill()
        t.color('black', 'white')
        t.up()
        t.goto(x, y + height[i])
        t.down()
        t.circle(size[i])
        t.end_fill()
    
    for i in range(2) :
        t.up()
        t.goto(x + arm[i][0], y + 90)
        t.down()
        t.goto(x + arm[i][1], y + 120)

t = turtle.Turtle()
turtle.bgcolor('skyblue')

for i in range(3) :
    drawSnowman(x[i], y)

turtle.done()