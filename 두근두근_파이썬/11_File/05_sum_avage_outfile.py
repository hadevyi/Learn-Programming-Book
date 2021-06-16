infilename = input("입력 파일 이름 : ")
outfilename = input("출력 파일 이름 : ")
infile = open(infilename, "r")
outfile = open(outfilename, "w")

total = 0
cnt = 0

for line in infile :
    line = line.rstrip()
    num = float(line)
    total += num
    cnt += 1

outfile.write("합계 = " + str(total) + "\n")
outfile.write("평균 = " + str(total/cnt) + "\n")
infile.close()
outfile.close()