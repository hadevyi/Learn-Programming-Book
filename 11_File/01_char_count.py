total = 0

filename = input("파일 이름을 입력하세요 : ")
infile = open(filename, "r")

for line in infile :
    line = line.rstrip()
    word_list = line.split()

    for word in word_list :
        total += len(word)

print("파일 안에는 총 " + str(total) + "개의 글자가 있습니다.")