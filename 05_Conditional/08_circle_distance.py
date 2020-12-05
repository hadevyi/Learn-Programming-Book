import turtle

t = turtle.Turtle()
t.shape('turtle')

x1 = int(input("큰 원의 중심좌표 x1 : "))
y1 = int(input("큰 원의 중심좌표 y1 : "))
radius1 = int(input("큰 원의 반지름 : "))

x2 = int(input("작은 원의 중심좌표 x1 : "))
y2 = int(input("작은 원의 중심좌표 y1 : "))
radius2 = int(input("작은 원의 반지름 : "))

t.up()
t.goto(x1, y1)
t.down()
t.circle(radius1)

t.up()
t.goto(x2, y2)
t.down()
t.circle(radius2)

if (radius1 - radius2) >= ((x1-x2)**2 + (y1-y2)**2)**0.5 :
    t.write("작은 원이 큰 원 내부에 있습니다.")
else :
    t.write("작은 원이 큰 원 외부에 있습니다.")

turtle.done()