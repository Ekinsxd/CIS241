
**rm - a command used to remove files with flags to increase efficiency
#Remove folder named poopoo alOng with all files inside
rm -rf poopoo

cd - command to go into a file directory "see directory" XDD.
#Go into file directory "desktop"
cd /home/tranet/desktop/

ls - command to list many things. You can list folder including flags like -r to reverse the list order and -R to list recursively to see files inside of directories.
#list home directory including hidden and include stats
ls -la

clear - clears the current screen of the shell.
#clear screen
clear

whoami - function that returns the username of the current user.
#make file with username name
touch $(whoami)

date - function that returns the current date of the system.
#make file with date name
touch $(date)

echo - function that displays the given text parameter with a newline at the end of the text.
#put text into file with name xD
echo 'text' >> xD

chmod - change the permissions of different user groups with u-xrw g-xrw o-rxw
#set group permissions of xd to read write and execute
chmod xd g-xrw

chown - change the owner of the given file.
#set owner of the file
chwon user file

chgrp - change group ownership. the groups that will be able to access the files with the g tag will be cahnged to whatever you want
#Set group users to poopoo of xd
chgrp poopoo /u

pwd - personal working directory. this returns what file youre currently in.
#show what directory youre currecntly in
pwd

ln - link 
im too lazy to do the rest
