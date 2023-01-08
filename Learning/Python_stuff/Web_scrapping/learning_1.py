#libraries needed for web scraping
#pip install ____
#requests , lxml ,bs4

import requests
import lxml
import bs4

#grabbing a title from a web page
#grabbing a class from a web page
result = requests.get("http://www.example.com/")

#result has stored the page source code now we can work on it and scrap useful information
#result.text will convert it to text ,the actual source code of website
soup = bs4.BeautifulSoup(result.text,'lxml')
#select will select the element we entered as a parameter
print(soup.select('title'))
#this will return a list of items matching with title tag , we can use index to print it indivitually
#.getText() will extract the text from tag specified
print(soup.select('title')[0].getText())

#grabbing all the stuff realted to a class on a web page
#syntax :- soup.select('div') -- all elements with div tag
#soup.select('#some_id') -- elements contating id = 'some_id'
#soup.select('.some_class) -- elements containing class = 'some_class'
#soup.select('div span') -- elements named span under div tag
#soup.select('div > span') -- elements named span directy within div tag , with nothing in between

result2 = requests.get('https://en.wikipedia.org/wiki/Main_Page')

soup2 = bs4.BeautifulSoup(result2.text,'lxml')
wel = soup2.select('.mw-headline')[0]
#scrapped according to class

print(wel.getText())

#grabbing an image
#we will grab a image from soup3
result3 = requests.get("https://en.wikipedia.org/wiki/Python_(programming_language)")
soup3 = bs4.BeautifulSoup(result3.text,'lxml')

#we look for img tag , tag[attribute = value]
img = soup3.select('img[alt="Python-logo-notext.svg"]')
for i in img:
   print(i['src'])
#print the src tag
#putting it in the reqeusts url with https: at the beginning
img_link = requests.get('https://upload.wikimedia.org/wikipedia/commons/thumb/c/c3/Python-logo-notext.svg/121px-Python-logo-notext.svg.png')
#we get the image in other format 
#we print the contents of it in a file and save it as jpg

with open("image.jpg",'wb') as image:
    image.write(img_link.content)


