import random

num1 = random.randint(1, 100)
num2 = random.randint(1, 100)

correct = num1 - num2

in_num = int(input(str(num1) + "-" + str(num2) + "="))

if correct == in_num :
    print("맞았습니다.")
else :
    print("틀렸습니다.")