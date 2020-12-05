import turtle

t = turtle.Turtle()
t.shape("turtle")

size = int(input("집의 크기는 얼마로 할까요? "))

t.forward(size)
t.left(120)
t.forward(size)
t.left(120)
t.forward(size)
t.left(30)
t.forward(size)
t.left(90)
t.forward(size)
t.left(90)
t.forward(size)

turtle.done()