total = 0

while True :
    num = int(input("정수를 입력하시오 : "))
    total += num

    if num == 0 :
        break

print("합은", total, "입니다.")