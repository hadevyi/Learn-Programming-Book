num_list = []
result = 0

for i in range(0, 5, 1) :
    num = int(input("정수를 입력하시오 : "))
    num_list.append(num)
    result += num

print("평균 = " + str(result/len(num_list)))