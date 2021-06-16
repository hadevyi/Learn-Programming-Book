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
elif shape == "삼각형" :
    length = int(turtle.textinput("", "길이 : "))
    t.forward(length)
    t.left(120)
    t.forward(length)
    t.left(120)
    t.forward(length)
elif shape == "원형" or shape == "원" : 
    radius = int(turtle.textinput("", "반지름 : "))
    t.circle(radius)
else :
    print("정해진 도형이 아닙니다 (사각형, 삼각형, 원형)")