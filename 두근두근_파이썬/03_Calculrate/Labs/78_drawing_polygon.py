import turtle

t = turtle.Turtle()
t.shape('turtle')

n = int(input("몇각형을 그리시겠어요? (3~6) : "))

for i in range(n) : 
    t.forward(100)
    t.left(360//n)