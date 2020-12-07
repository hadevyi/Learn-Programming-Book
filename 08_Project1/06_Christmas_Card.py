import turtle
import random

def draw_circle(turtle, color, x, y, radius): 
    turtle.penup()
    turtle.fillcolor(color)
    turtle.goto(x, y)
    turtle.pendown()
    turtle.begin_fill()
    turtle.circle(radius)
    turtle.end_fill()
 
def draw_rectangle(turtle, color, x, y, width, height):
    turtle.penup()
    turtle.fillcolor(color)
    turtle.goto(x, y)
    turtle.pendown()
    turtle.begin_fill()
    for i in range(2):
        turtle.forward(width)
        turtle.left(90)
        turtle.forward(height)
        turtle.left(90)
    turtle.end_fill()
    
def draw_trapezoid(turtle, color, x, y, width, height):
    turtle.penup()
    turtle.fillcolor(color)
    turtle.goto(x, y)
    turtle.pendown()
    turtle.begin_fill()
    turtle.forward(width)
    turtle.right(60)
    turtle.forward(height)
    turtle.right(120)
    turtle.forward(width+20)
    turtle.right(120)
    turtle.forward(height)
    turtle.right(60)
    turtle.end_fill()
 
def draw_star(turtle, color, x, y, size):
    turtle.penup()
    turtle.fillcolor(color)
    turtle.goto(x, y)
    turtle.pendown()
    turtle.begin_fill()
    for i in range(10):
        turtle.forward(size)
        turtle.right(144)
    turtle.end_fill()
 
t = turtle.Turtle()
t.shape("turtle")
t.speed(0)
 
x = 0
y = 0

draw_rectangle(t, "brown", x-20, y-50, 30, 50)

width = 240
height = 20
for i in range(10):
    width = width - 20
    x = 0 - width/2
    draw_trapezoid(t,"green", x, y, width, height)
    draw_circle(t,"red", x + random.randint(0, width), y + random.randint(0, height), 10)
    y = y + height
 
draw_star(t,"yellow", 4, y, 100)
 
t.penup()
t.color("red")
t.goto(-200, 250)
t.write("Merry Christmas", font = ("Arial", 24, "italic"))
t.goto(-200, 220)
t.write("Happy New Year!", font = ("Arial", 24, "italic"))