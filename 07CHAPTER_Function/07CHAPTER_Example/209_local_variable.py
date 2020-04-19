def calculate_area(radius) :
    result = 3.14 * radius**2
    return result

r = float(input("원의 반지름 : "))
area = calculate_area(r)
print(area)