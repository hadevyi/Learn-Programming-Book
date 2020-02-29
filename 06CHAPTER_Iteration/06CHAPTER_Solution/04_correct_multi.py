import random

while True :
    num1 = random.randint(1, 9)
    num2 = random.randint(1, 9)
    result = num1 * num2

    in_num = int(input(str(num1) + "*" + str(num2) + "는 "))

    if in_num == result :
        print("맞았습니다.")
        break