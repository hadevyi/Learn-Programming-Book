import smtplib
from email.mime.text import MIMEText

me = "abc@server.kr"
you = "def@gmail.com"
contents = "Test email"

msg = MIMEText(contents, _charset='euc-kr')
msg['Subject'] = "Test Title"
msg['From'] = me
msg['To'] = you

server = smtplib.SMTP("stmp.gmail.com", 587)
server.ehlo()
server.starttls()
server.ehlo()

server.login("자신의 아이디", "패스워드")
server.quit()