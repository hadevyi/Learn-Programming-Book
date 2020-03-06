heroes = ['아이언맨', '토르', '헐크', '스칼렛 위치']
print(heroes)

heroes.sort()
print(heroes)

number = [9, 6, 7, 1, 8, 4, 5, 3, 2]
number.sort()
print('sort된 number : ', number)

number = [9, 6, 7, 1, 8, 4, 5, 3, 2]
new_list = sorted(number)
print('정렬 전 number : ', number)
print('정렬 된 number가 저장된 new_list : ', new_list)

new_list2 = sorted(new_list, reverse=True)
print('역sort된 number2 ; ', new_list2)