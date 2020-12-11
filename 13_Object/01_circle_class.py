PI = 3.141592

class Circle :
    def __init__(self, radius) :
        self.radius = radius
    
    def calcPerimeter(self) :
        return self.radius * 2 * PI

    def calcArea(self) :
        return self.radius **2 * PI

circle = Circle(100)
print("반지름 :", circle.radius)
print("원의 면적 :", circle.calcArea())
print("원의 둘레 :", circle.calcPerimeter())