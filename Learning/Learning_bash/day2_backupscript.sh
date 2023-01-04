#!/bin/bash
#Author : Chahat sagar
#Date created : 3-01-2023
#Last Modified : 3-01-2023
#Description:-
#create a backup in ~/bashscript/backup
echo "This is a backup script "
#this script puts the files in backup folder , and converts all of them in .tar format
#the first directory is where i am putting the backup studd and the second directory is where the file which has to backuped is stored
tar -cvf ~/Desktop/bashscript/backup/backup_"$(date +%d-%m-%Y_%H-%M-%S)".tar ~/Desktop/coding  2>/dev/null

exit 0

