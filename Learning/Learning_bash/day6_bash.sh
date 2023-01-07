#!/bin/bash
#tilde expansion - really useful when we have to deal with multiple direcotries
#default ~ will expand current user's home directory

echo ~
#this will expand our current home directory

echo ~name 
#this will expand the other user's home directory present on out pc

echo ~root
#will expand the root folder

echo $PWD
#present working directory

echo $OLDPWD
#gives us the old pwd

cd ~-
#switch back to our older directory we were using just like $OLDPWD
# ~+ works like $PWD

#Brace expansion
#brance expansion can extend a list

echo {1,19,a}

#will give u 1 19 a 

echo { 1,19,a}
#will be identified as a string and we will get a whole string instead of expansion
#instead of {1,2,3,4,5,6,7,8,9} we can use ranged list {1..9} which just means numbers from 1 to 9 and we will hava the same output
#{10..1} 10 to 1 , {a..z} a to z letters
#{1..10..3} this means the numbers from 1 to 10 with 3 space between them

echo year{1..12}

#this will print us year1 year2 .... year12

mkdir year{1..12}

#this will make 12 folders from year1 to year12


