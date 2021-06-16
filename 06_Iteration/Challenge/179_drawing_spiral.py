import turtle

color = ["red", "purple", "blue", "green", "yellow", "orange"]

t = turtle.Turtle()
turtle.bgcolor('black')
t.shape('turtle')
t.speed(0)
t.width(3)
length = 10

while length < 500 :
    t.color(color[length%6])
    t.forward(length)
    t.right(70)
    length += 5