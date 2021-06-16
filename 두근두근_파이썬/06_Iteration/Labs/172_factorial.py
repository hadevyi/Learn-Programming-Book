num = int(input("정수를 입력하시오 : "))

result = 1

for i in range(1, num + 1, 1) :
    result *= i

print(str(num) + "!은", result, "이다.")