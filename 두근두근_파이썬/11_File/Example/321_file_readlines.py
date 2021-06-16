infile = open("phones.txt", "r", encoding="UTF8")

'''
line = infile.readline().rstrip()

while line != "" :
    print(line)
    line = infile.readline().rstrip()
infile.close()
'''

for line in infile :
    line = line.rstrip()
    print(line)
infile.close()