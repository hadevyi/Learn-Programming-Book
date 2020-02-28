answer = "yes"
num = 0

while answer == "yes" :
    num += int(input("숫자를 입력하시오 : "))
    answer = input("계속? (yes / no) : ")

print("합계는", num)