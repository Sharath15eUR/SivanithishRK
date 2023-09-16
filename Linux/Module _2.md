Environment Variable

1. How can you know what is the secondary command prompt set your system ?

          echo $PS2
   How can you change the secondary command prompt from the default to your username ?

          PS2="$LOGNAME"

3. How can you ensure that the mv command (used for renaming a file) always asks for permission before overwriting an existing destination file ? 
   [ Hint : use alias command ]
       alis mv="mv-i"

Basics Of System Administration in Linux

1) Create a new user account and home directory called "Duck" 
         sudo adduser
         sudo adduser duck

2) Set the user account "Duck's" expirey date as 07 - 01 - 2015
         sudo usermod -e 2015-01-07 duck
         ![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/a63e17c3-d04a-446b-90bf-30373535ea20)

         

4) find the id of the user account "Duck"
         id-u

5) Type df and du commands and see the output on your terminal.
        

6) Type this command on the terminal and see the output :
   du -ch *.txt
        It shows  memory of the text files in the directory
        

7) Delete the user account "Duck" permanently along with its home folder.
        sudo userdel -r duck
   
