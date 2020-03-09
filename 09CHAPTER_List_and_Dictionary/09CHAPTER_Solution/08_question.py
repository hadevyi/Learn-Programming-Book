problems = {"파이썬":"최근에 가장 떠오르는 프로그래밍 언어", 
            "변수" : "데이터를 저장하는 메모리 공간",
            "함수" : "작업을 수행하는 문장들의 집합에 이름을 붙인 것",
            "리스트" : "서로 관련이 없는 항목들의 모임"}

print("다음은 어떤 단어에 대한 설명일까요")

for word in problems.keys() :
    i = 1  
    print("=====================================")
    print(problems[word] + "?")
    
    for key in problems.keys() :
        print("(" + str(i) + ") " + key, end= "    ")
        i += 1
    
    print("")
    
    answer = input(">> ")

    if word == answer :
        print("정답입니다!")
    else :
        print("오답입니다.")