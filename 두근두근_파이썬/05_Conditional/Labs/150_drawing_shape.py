import turtle

t = turtle.Turtle()
t.shape('turtle')

shape = turtle.textinput("", "도형을 입력하시오 : ")

if shape == "사각형" :
    width = int(turtle.textinput("", "가로 : "))
    height = int(turtle.textinput("", "세로 : "))
    t.forward(width)
    t.left(90)
    t.forward(height)
    t.left(90)
    t.forward(width)
    t.left(90)
    t.forward(height)
    t.left(90)