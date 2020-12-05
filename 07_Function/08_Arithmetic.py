def sum(num1, num2) :
    return num1 + num2

def sub(num1, num2) :
    return num1 - num2

def mul(num1, num2) :
    return num1 * num2

def div(num1, num2) :
    return num1 / num2

num1 = int(input("첫 번째 숫자 : "))
num2 = int(input("두 번째 숫자 : "))

print(str(num1) + " + " + str(num2) + " = ", sum(num1, num2))
print(str(num1) + " - " + str(num2) + " = ", sub(num1, num2))
print(str(num1) + " * " + str(num2) + " = ", mul(num1, num2))
print(str(num1) + " / " + str(num2) + " = ", div(num1, num2))