Array Operations in BASH

1) Declare an Array names of length 7 and find
   a. The total number of elements
   b. Print all the elements
   c. Print the 5th element

        #!/bin/bash

        declare -a NAME=('RAM' 'SIVA' 'SANJAY' 'BALA' 'GOKUL' 'PUJA' 'DHANUSH')

        echo "The total number of elements:${#NAME[@]}"

        echo "All elements of array:${NAME[@]}"

        echo "5th element of the array is:${#NAME[5]}"


   
![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/4f87b015-9553-4aac-8712-40eefbc9fbaa)


![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/3f693e09-d4cb-4257-88bd-f8587354bb71)
