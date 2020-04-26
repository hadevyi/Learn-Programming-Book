year = 0
balance = 1000

while balance < 2000 :
    year += 1
    interest = balance * 0.07
    balance += interest

print(year, "년이 걸립니다.")