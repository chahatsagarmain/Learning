#!/bin/bash
#command substitution
#piping the output from one command for input to the other command
# $(command)
#data can be saved in user created variables
time=$(date +%H:%m:%S)
#time will hold the output from date command to time 
echo "The time is $time "

exit 0
