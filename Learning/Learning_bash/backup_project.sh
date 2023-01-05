#!/bin/bash/
#This is the same backup script icreated earlier to backup my codes folder now i will make it little for eye candy

echo "Welcome User ${USER^}"

echo "This is a backup scipt to backup my codes folder from my desktop"

cdd=$(pwd)

echo "This backup script is being run from ${cdd}"

tar -cvf ~/Desktop/bashscript/backup/backup_"$(date +%d-%m-%Y_%H-%M-%S)".tar ~/Desktop/coding 

echo "The script has been completed"

exit 0
