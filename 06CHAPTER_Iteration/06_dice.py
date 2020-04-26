import random

cnt = 0

while True :
    num1 = random.randint(1, 6)
    num2 = random.randint(1, 6)

    print("첫번째 주사위 =", num1, "두 번째 주사위 =", num2)
    cnt += 1

    if cnt == 3 :
        break