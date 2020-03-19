money = int(input("투입한 돈 : "))
price = int(input("물건값 : "))
change = money - price

print("거스름돈 : ", change)
coin500s = change // 500  # 500으로 나눈 몫의 값은 500원의 갯수
change = change % 500     # 남은 잔돈의 값으로 change 값을 바꿔줌

coin100s = change // 100  # 100으로 나눈 몫의 값은 100원의 갯수

print("500원 동전의 개수 : ", coin500s)
print("100원 동전의 개수 : ", coin100s)