filename = input("입력 파일 이름 : ")
infile = open(filename, "r")

content = infile.read()

char_list = [0 for i in range(26)]

for i in content :
    for j in range(97, 123) :
        if i == chr(j) :
            char_list[ord(i)-97] += 1

for i in range(26) :
    print(chr(i + 97) + " = " + str(char_list[i]), end = " ")
