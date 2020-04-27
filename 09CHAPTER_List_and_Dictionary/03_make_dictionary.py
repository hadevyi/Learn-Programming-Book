phone_book = {}

while True :
    name = input("(입력모드) 이름을 입력하시오 : ")

    if not name :
        while True :
            search_name = input("(검색모드) 이름을 입력하시오 : ")

            if not search_name :
                break

            print(phone_book[search_name])
    else :
        tel = input("전화번호를 입력하세요 : ")
        phone_book[name] = tel