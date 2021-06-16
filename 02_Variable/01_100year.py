from datetime import datetime

name = input("이름을 입력하시오 : ")
age = input("나이를 입력하시오 : ")

hundred = 100 - int(age)
hundred = datetime.today().year + hundred

print(name, "씨는 ", hundred, "년에 100살이시네요")