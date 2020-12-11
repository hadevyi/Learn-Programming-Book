class Ball :
    def __init__(self, color, size, x, y, xspeed, yspeed) :
        self.color = color
        self.size = size
        self.x = x
        self.y = y
        self.xspeed = xspeed
        self.yspeed = yspeed
    
    def move(self) :
        pass

ballA = Ball("red", 30, 0, 0, 0, 0)
print("공의 색상 = ", ballA.color)
print("공의 크기 = ", ballA.size)
print("공의 x 좌표 = ", ballA.x)

print("")

ballB = Ball("blue", 100, 50, 50, 10, 10)
print("공의 색상 = ", ballB.color)
print("공의 크기 = ", ballB.size)
print("공의 x 좌표 = ", ballB.x)
