import turtle

t = turtle.Turtle()
t.shape("turtle")

radius = 50

t.circle(radius)
t.penup()
t.goto(100, 0)
t.pendown()
t.circle(radius + 20)
t.penup()
t.goto(200, 0)
t.pendown()
t.circle(radius + 40)