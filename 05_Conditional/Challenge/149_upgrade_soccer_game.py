import random

options = ["왼쪽 상단", "왼쪽 하단", "중앙", "오른쪽 상단", "오른쪽 하단"]

auto = random.choice(options)
where = input("어디를 수비하시겠어요(왼쪽 상/하단, 중앙, 오른쪽 상/하단)? ")

if auto == where :
    print("수비에 성공하였습니다.")
else : 
    print("페널티 킥이 성공하였습니다.")