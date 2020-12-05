americano = 2000
cafelatter = 3000
capucino = 3500

ame_cnt = int(input("아메리카노 판매 개수 : "))
cafe_cnt = int(input("카페라떼 판매 개수 : "))
capu_cnt = int(input("카푸치노 판매 개수 : "))

result = americano * ame_cnt + cafelatter * cafe_cnt + capucino * capu_cnt

print("총 매출은 ", result, "입니다.")