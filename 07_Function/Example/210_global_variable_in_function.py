def calculate_area(radius) :
    global area
    area = 3.14 * radius**2
    return

area = 0
r = float(input("원의 반지름 : "))
calculate_area(r)
print(area)