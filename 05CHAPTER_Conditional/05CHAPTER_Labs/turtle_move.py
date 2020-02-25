import turtle

t = turtle.Turtle()
t.shape('turtle')

while True :
    order = input("명령을 입력하시오 : ")

    if order == "l" :
        t.left(90)
        t.forward(100)
    elif order == "r" :
        t.right(90)
        t.forward(100)
    else : 
        print("잘못입력하셨습니다.")   

turtle.done()