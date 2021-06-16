heroes = ['아이언맨', '토르', '헐크', '스칼렛 위치']
print(heroes)
print(heroes.index('헐크'))

# 리스트에 존재하는지 확인해야하는 과정
if '헐크' in heroes :
    print(heroes.index('헐크'))

for hero in heroes :
    print(hero)