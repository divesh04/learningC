# C for Everyone 
This repository has all the hws from the course 

## Using git  
https://www.youtube.com/watch?v=RGOj5yH7evk

Some commands which are useful:
ls -la % for hidden files 
git status
git add . % to add all files to tracking 
git commit -m "include your message here"


ssh-keygen -t ed25519 -C "divesh.iist@gmail.com"

ls | grep ckey % to search for keynamed ckey 
% upload the public key to the github 
cat ckey.pub % copy the jey from this command
% paste it on github wbsite -> settings -> GPG and Keys
ssh-add -K ckey % ckey is the name of the key

git push origin master