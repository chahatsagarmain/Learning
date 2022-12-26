from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart
import smtplib
import requests
from bs4 import BeautifulSoup
import os
from email.message import EmailMessage
#automated the script with crontab , crontab -l to print the scripts , crontab -e to edit or initiate a new one

url = "https://en.wikipedia.org/wiki/Main_Page"
store = requests.get(url).text
doc = BeautifulSoup(store, "html.parser")
find = doc.find("div", id="mp-tfa")
div_content = find.find_all("p")
for i in div_content:
  temp = i.text
para = f"The Todays Featured article on Wikipedia \n{temp}"
print(para)

smtp = smtplib.SMTP('smtp.gmail.com', 587)
smtp.ehlo()
smtp.starttls()


to ={"to address","to address"}
from_email = "from"
subject = 'Your daily dose of automated email'

msgg = EmailMessage()
msgg['From'] = from_email
msgg['To'] = to
msgg['Subject'] = subject
msgg.set_content(para)

smtp.login('gmail email', 'pass_here(make a app password)')

smtp.sendmail(from_addr=from_email, to_addrs=to, msg = msgg.as_string())
smtp.quit()
