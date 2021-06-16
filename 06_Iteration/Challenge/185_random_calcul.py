import random

while True :
    num1 = random.randint(1, 100)
    num2 = random.randint(1, 100)
    result = num1 - num2

    in_str = int(input(str(num1) + "-" + str(num2) + "= ? : "))

    if in_str == result :
        print("잘했어요!!")
    else :
        print("다음번에는 잘 할 수 있죠?")