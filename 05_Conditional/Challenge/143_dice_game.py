import random

print("주사위 던지기 게임을 시작합니다.")

dice = random.randrange(6)

if dice % 2 == 0:
    print(dice, "는 짝수입니다.")
else :
    print(dice, "는 홀수입니다.")

print("게임이 종료되었습니다.")