class Car :
    def __init__(self, speed, color, model):
        self.speed = speed
        self.color = color
        self.model = model

    def drive(self) :
        self.speed = 60
    
myCar = Car(0, "blue", "E-class")

print("자동차 객체를 생성하였습니다.")
print("자동사의 속도는", myCar.speed)
print("자동사의 색상은", myCar.color)

print("자동사의 모델은", myCar.model)
print("자동차를 주행합니다.")
myCar.drive()
print("자동차의 속도는", myCar.speed)