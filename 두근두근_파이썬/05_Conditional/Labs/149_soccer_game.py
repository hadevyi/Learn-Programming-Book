import random

options = ["왼쪽", "중앙", "오른쪽"]

auto = random.choice(options)
where = input("어디를 수비하시겠어요(왼쪽, 중앙, 오른쪽)? ")

if auto == where :
    print("수비에 성공하였습니다.")
else : 
    print("페널티 킥이 성공하였습니다.")