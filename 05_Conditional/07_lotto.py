import random

lotto = random.randint(0, 100)
num = int(input("복권번호를 입력하시오(0에서 99사이) : "))

correct = 0

lotto_1 = lotto // 10
lotto_2 = lotto % 10

num_1 = num // 10
num_2 = num % 10

if lotto_1 == num_1 :
    correct += 1
elif lotto_1 == num_2 :
    correct += 1

if lotto_2 == num_1 :
    correct += 1
elif lotto_2 == num_2 :
    correct += 1

if correct >= 2 :
    print("상금은 100만원입니다.")
elif correct == 1 :
    print("상금은 50만원입니다.")
else :
    print("상금은 없습니다.")