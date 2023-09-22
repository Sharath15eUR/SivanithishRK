Basics of Shell Scripting

1) Write a simple Bash program to get the following system variables:
   a. pwd
   b. logname

           #!/bin/bash
           echo "$PWD"
           echo "$LOGNAME"

    ![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/b132ec14-d10c-448b-a0bc-f711b0aa509d)


2) Write a simple Bash program:
   a. To ask username from user
   b. Exit the program, if user does not enter anything within 10 seconds
   
   Hint: read -t 10 -p

           #!/bin/bash
           read -t 10 -p "Enter username:" Susername
           echo "Hello $username"

![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/d0cd4216-889c-47b1-9afc-ae61bc2762e1)
![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/dc72e7e7-f6b3-428d-a616-61ed9fb86710)
