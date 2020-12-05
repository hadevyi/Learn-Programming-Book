print("모든 단(1~9)을 출력합니다.")

for i in range(1, 10) :
    for j in range(1, 10):
        print(i, "*", j, "=", i*j)
    print("="*10)
