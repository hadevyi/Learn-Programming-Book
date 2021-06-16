from turtle import *

t1 = Turtle()
t1.shape("circle")

t2 = Turtle()
t2.shape("turtle")

t3 = Turtle()
t3.shape("square")

t1.up()
t2.up()
t1.goto(0, 100)
t2.goto(0, 50)
t1.down()
t2.down()

while True :
    t1.circle(100)
    t2.circle(150)
    t3.circle(200)