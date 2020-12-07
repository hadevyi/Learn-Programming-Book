import smtplib
from email.mime.text import MIMEText

me = "abc@server.kr"
yours = ["def@gmail.com", "ghi@gmail.com", "jkl@gmail.com"]
contents = "Test email"

for you in yours :
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