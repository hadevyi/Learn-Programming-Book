import turtle

t = turtle.Turtle()
t.shape('turtle')

x1 = int(input("x1 : "))
y1 = int(input("y1 : "))
x2 = int(input("x2 : "))
y2 = int(input("y2 : "))

distance = ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** 0.5

print("두점 사이의 거리 = ", distance)

t.left(45)
t.forward(distance)
t.goto(x1, y1)
t.setheading(0)
t.forward(100)
t.left(90)
t.forward(100)