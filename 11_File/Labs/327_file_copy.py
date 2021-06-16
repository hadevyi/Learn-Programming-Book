'''
# 라이브러리를 활용한 쉬운 카피 방법
import shutil
shutil.copy("phones.txt", "phones_copy.txt")
'''

infile_name = input("입력 파일 이름 : ")
outfile_name = input("출력 파일 이름 : ")

infile = open(infile_name, "r", encoding="UTF8")
outfile = open(outfile_name, "w", encoding="UTF8")

s = infile.read()
outfile.write(s)

infile.close()
outfile.close()