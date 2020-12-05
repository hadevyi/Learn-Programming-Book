import turtle

t = turtle.Turtle()
t.shape("turtle")

s = turtle.textinput("", "이름을 입력하시오 : ")

for i in range(4) :
    t.left(90)
    t.forward(100)
    t.write(s + "씨")

turtle.done()