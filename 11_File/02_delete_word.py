total = 0

filename = input("파일 이름을 입력하세요 : ")
deleteword = input("삭제할 문자열을 입력하시오 : ")
infile = open(filename, "r")

content = infile.read()
new_context = content.replace(deleteword + "\n", "")
new_context.strip()

outfile = open(filename, "w")
outfile.write(new_context)

infile.close()
outfile.close()