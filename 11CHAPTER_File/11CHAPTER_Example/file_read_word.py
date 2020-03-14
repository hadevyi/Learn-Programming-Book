infile = open("proverbs.txt", "r", encoding="UTF8")
for line in infile :
    line = line.rstrip()
    word_list = line.split()
    for word in word_list :
        print(word)
infile.close()