class Car :
    def __init__(self, speed, color, model) :
        self.speed = speed
        self.color = color
        self.model = model
    
    def __str__(self) :
        msg = "속도 : " + str(self.speed) + " 색상 : " + self.color + " 모델 : " + self.model
        return msg

    def drive(self) :
        self.speed = 60

myCar = Car(0, "blue", "E-class")
print(myCar)