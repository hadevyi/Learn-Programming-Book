import turtle

t = turtle.Turtle()
t.shape("turtle")

s = turtle.textinput("", "몇각형을 원하시요? ")
n = int(s)

s = turtle.textinput("", "한변의 길이를 원하시나요? ")
length = int(s)

for i in range(n):
    t.forward(length)
    t.left(360/n)

turtle.done()