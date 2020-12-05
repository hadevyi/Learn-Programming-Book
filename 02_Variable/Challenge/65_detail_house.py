import turtle

t = turtle.Turtle()
t.shape("turtle")

size = int(input("집의 크기는 얼마로 할까요? "))

# 지붕
t.forward(size)
t.left(120)
t.forward(size)
t.left(120)
t.forward(size)

# 몸체
t.left(30)
t.forward(size)
t.left(90)
t.forward(size)
t.left(90)
t.forward(size)
t.left(90)
t.forward(size)
t.left(180)

# 창문
t.forward(size * 0.1)
t.right(90)
t.up()
t.forward(size * 0.1)
t.down()
for i in range(4) : 
    t.forward(size/2)
    t.left(90)

t.forward(size/4)
t.left(90)
t.forward(size/2)
t.left(90)
t.forward(size/4)
t.left(90)
t.forward(size/4)
t.left(90)
t.forward(size/2)

turtle.done()