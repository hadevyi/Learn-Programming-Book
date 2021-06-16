dict = {"Name":"홍길동", "Age" : 7, "Class" : "초급"}
print(dict['Name'])
print(dict.keys())
print(dict.values())

phone_book = {"홍길동" : "010-1234-5678", "강감찬" : "010-1234-5679", "이순신" : "010-1234-5680"}
for key in sorted(phone_book.keys()) :
    print(key, phone_book[key])