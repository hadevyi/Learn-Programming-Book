import random

counters = [0, 0, 0, 0, 0, 0]

for i in range(1000) :
    ran = random.randint(0, 5)
    counters[ran] += 1

for i in range(6) :
    print("주사위가 ", (i+1), "인 경우는", counters[i])