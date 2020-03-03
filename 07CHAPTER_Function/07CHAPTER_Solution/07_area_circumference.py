PI = 3.1415926

def circleArea(radius) :
    return PI * radius ** 2

def circleCircumference(radius) :
    return 2 * PI * radius

r = float(input("반지름의 값을 입력하세요 : "))
print("반지름이 " + str(r) + "인 원의 면적 : " + str(circleArea(r)))
print("반지름이 " + str(r) + "인 원의 둘레 : " + str(circleCircumference(r)))