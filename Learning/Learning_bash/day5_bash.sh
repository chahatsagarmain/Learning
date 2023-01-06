#!/bin/bash
#Arithmatic operation
#the syntax for arithematic operation is $((expression))

echo $((4*2))

x=4
y=2

echo $(( x * y))
#it prints the same thing so we can use variables for arithematic operation
#the bash follow the order of precendence 

echo $((2 + 3 * 2))
#it gives output 8 but to make addition execute first we have to use parenthesis

echo $(((2 + 3) * 2))
#now the output is 10

#bc command is used to decimal operation in script
#scale variable is used to tell how many decimal should be present 

echo "scale=5; 6/4" | bc

#here we are printing the result with scaling decimal part till 5 digitss and piping the result to bc command to give us the decimal result


