Nested and multilevel if elsif statements

1) Write a program to output different messages when number is:
   a. Greater than 3
   b. Lesser than 3
   c. Or equal to 3
   d. Or when the user input is empty

            #!/bin/bash
            read -p "Enter a  number" num
            if [ -z "$num"  ]; then
               echo "Nothing was entered"
            elif [[ "$num" > 3 ]]; then  
               echo "Number is greater than 3"
            elif [[ "$num" < 3 ]]; then  
               echo "Number is less than 3"
            elif [[ "$num" -eq 3 ]]; then  
               echo "Number is equal to 3"
            fi




![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/ff710b41-8a50-4243-af91-8113e37242fe)

![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/08ffb486-d8ac-4647-9b07-f3e2c3189753)
