import smtplib
import getpass
#this library allows us to hide our password while typing it 

#SMTP - SIMPLE MAIL TRANSFER PROTOCOL
#To use gmail you have to generate a specific app password which will be used by our script to login 
#smtplib.SMTP('domain', port number of the site)

smtp_object = smtplib.SMTP('smtp.gmail.com',587)
#ehlo greets the server , makes sure we connected to the domain
smtp_object.ehlo()
#enables enscription for our emails 

smtp_object.starttls()
password = getpass.getpass("Enter your password : ")

mail = getpass.getpass("Enter your email addrress : ")

from_add = mail

to = mail #i want to send it to myself

smtp_object.login(mail,password)

subject = input("Enter the subject of the email : ")

msg = input("Enter the message : ")

content = "Subject:" + subject + "\n" + msg

smtp_object.sendmail(mail,mail,content)

smtp_object.quit()