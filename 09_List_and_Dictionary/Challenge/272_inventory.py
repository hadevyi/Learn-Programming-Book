items = {"커피":7, "펜":3, "종이컵":2, "우유":1, "콜라":4, "책":5}


while True :
    print("=" * 50)                                 # Menu
    for item, count in items.items() :
        print(item + "\t" + str(count))
    print("=" * 50)

    print("구매하시려면 1번을, 재고를 채우시려면 2번을 눌러주세요.")
    choose = input(">> ")

    if choose not in ["1", "2"] :
        print("[Error] 잘 못 입력하셨습니다.")
    else :
        item = input("물건의 이름을 입력하시오 : ")

        if item not in items.keys() :
            print("[Error] 존재하지 않는 물건입니다.")
        else :
            num = int(input("원하시는 수량을 입력하세요."))

            if choose == "1" and items[item] < num :
                print("[Error] 재고보다 원하시는 수량이 많습니다.")
            elif choose == "1" :
                items[item] -= num
            elif choose == "2" :
                items[item] += num