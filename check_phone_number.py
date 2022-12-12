import re
#scrapping out phone number from a bunch of text
def checkPhoneNumber(text):
    temp = ''
    counter = 0
    for i in range(0,len(text)):
        if(text[i] == '+' and text[i].isdigit()):
            temp = text[i:i+12]
            print("The Phone number from the text is " + temp)
            break
        else:
            if(text[i].isdigit()):
              if(i+9 < len(text)):   
               for j in range(i,i+9):
                if(text[j].isdigit()):
                  counter += 1
                if(counter == 10):
                    temp = text[i:i+10]
                    print("The Pho number from the text is " + temp)
                    break
#with regex
def regex_checkPhone(text):
 myPhone = re.compile(r'\d\d\d\d\d\d\d\d\d\d')
 mobile = myPhone.search(text)
 final = mobile.group()
 print("The mobile Number is " + final)


           
text = input("Enter The text:")
checkPhoneNumber(text)
regex_checkPhone(text)

