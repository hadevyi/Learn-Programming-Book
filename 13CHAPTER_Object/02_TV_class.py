
class TV :
    def __init__(self) :
        self.channel = 1
        self.volumn = 1
        self.on = True
    
    def turnOn(self) :
        self.on = True

    def turnOff(self) :
        self.on = False

    def setChannel(self, channel) :
        self.channel = channel
    
    def setVolumn(self, volumn) :
        self.volumn = volumn

    def __str__(self) :
        mag = "전원 상태 " + str(self.on) + "\n볼륨 : " + str(self.volumn) + "\n채널 : " + str(self.channel)
        return mag

tv = TV()

while True :
    print("======================================")
    print("1. 전원 끄기")
    print("2. 전원 켜기")
    print("3. 채널 조절")
    print("4. 볼륨 조절")
    print("5. 현재의 상태 출력")
    print("6. 프로그램 종료")
    print("======================================")

    order = int(input("원하는 기능의 번호를 입력하세요 >> "))

    if order == 1:
        tv.turnOn()
    elif order == 2 :
        tv.turnOff()
    elif order == 3 :
        num = int(input("원하는 채널 값을 입력하세요 >> "))
        tv.setChannel(num)
    elif order == 4 : 
        num = int(input("원하는 볼륨 값을 입력하세요 >> "))
        tv.setVolumn(num)  
    elif order == 5 :
        print(tv)
    elif order == 6 :
        print("프로그램을 종료합니다.")
        break
    else :
        print("기능의 번호를 잘 못 누르셨습니다. 범위는 1 ~ 6입니다. ")