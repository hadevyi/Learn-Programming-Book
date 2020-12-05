import random

cnt = 0
corret = random.randint(1, 101)
print("1부터 100 사이의 숫자를 맞추시오")
num = int(input("숫자를 입력하시오 : "))

while num != corret :
    cnt += 1

    if num < corret :
        print("낮음!")
    elif num == corret :
        break
    else :
        print("높음!")      

    num = int(input("숫자를 입력하시오 : "))

print("축하합니다. 시도 횟수 = ", cnt)