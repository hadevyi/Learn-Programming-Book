import turtle

t = turtle.Turtle()
t.shape('turtle')

x1 = int(input("x1 : "))
y1 = int(input("y1 : "))
x2 = int(input("x2 : "))
y2 = int(input("y2 : "))

distance = ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** 0.5

t.penup()
t.goto(x1, y1)
t.pendown()
t.goto(x2, y2)
t.penup()
t.write(("점 사이의 길이 = ", distance), False)

