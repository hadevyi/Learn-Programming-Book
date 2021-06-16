import random
import turtle
color = ["yellow", "orange", "white", "red", "purple", "blue"]

def draw_shape(t, c, length, sides, x, y) :
    angle = 360/sides
    t.up()
    t.goto(x, y)
    t.down()
    t.color('black', c)
    t.begin_fill()
    for i in range(sides) :
        t.forward(length)
        t.right(angle)
    t.end_fill()

t = turtle.Turtle()
t.speed(0)

for i in range(10) :
    ran_c = random.choice(color)            # 랜덤한 색깔
    ran_l = random.randint(50, 200)         # 랜덤한 길이
    ran_s = random.randint(3, 6)           # 랜덤한 각
    ran_x = random.randint(-300, 300)       # 랜덤한 x좌표
    ran_y = random.randint(-300, 300)       # 랜덤한 y좌표
    draw_shape(t, ran_c, ran_l, ran_s, ran_x, ran_y)

turtle.done()