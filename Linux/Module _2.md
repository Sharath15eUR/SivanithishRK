Environment Variable

1. How can you know what is the secondary command prompt set your system ?

          echo $PS2
   How can you change the secondary command prompt from the default to your username ?

          PS2="$LOGNAME"

2. How can you ensure that the mv command (used for renaming a file) always asks for permission before overwriting an existing destination file ? 
   [ Hint : use alias command ]

          alis mv="mv-i"

Basics Of System Administration in Linux

1) Create a new user account and home directory called "Duck"
   
         sudo adduser
         sudo adduser duck
   ![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/108501f1-54bf-4abf-8c18-a2e026e7a30d)



2) Set the user account "Duck's" expirey date as 07 - 01 - 2015
   
         sudo usermod -e 2015-01-07 duck
   ![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/26a60822-556b-4d01-9147-cb97d5384881)

         



         

3) find the id of the user account "Duck"
   
         id-u

4) Type df and du commands and see the output on your terminal.
             ![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/a4d569fa-a3f2-4656-b267-f74e15fbf541)
             ![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/a5bd3ef7-7bf6-47ff-bc86-63a4a80019bd)
             ![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/f5affff7-ebe4-470b-9adf-6c3e4f400a77)


          

         
         

        

5) Type this command on the terminal and see the output :
   du -ch *.txt
        It shows  memory of the text files in the directory
        ![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/9dbf2c8c-5348-4a2d-a6cd-dee6d125261f)


6) Delete the user account "Duck" permanently along with its home folder.

              sudo userdel -r duck
   ![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/ae8274ec-75d6-4761-88f7-de3f7f24db28)

         



             
