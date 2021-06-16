import turtle
t = turtle.Turtle()
t.shape("turtle")

color_list = ["yellow", "red", "blue", "green"]

t.fillcolor(color_list[0])
t.begin_fill()
t.circle(100)
t.end_fill()

t.forward(50)
t.fillcolor(color_list[1])
t.begin_fill()
t.circle(100)
t.end_fill()

t.forward(50)
t.fillcolor(color_list[2])
t.begin_fill()
t.circle(100)
t.end_fill()

t.forward(50)
t.fillcolor(color_list[3])
t.begin_fill()
t.circle(100)
t.end_fill()

turtle.done()