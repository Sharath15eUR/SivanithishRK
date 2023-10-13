Array Operations in BASH

1) Declare an Array names of length 7 and find
   a. The total number of elements
   b. Print all the elements
   c. Print the 5th element

        #!/bin/bash

        declare -a NAME=('RAM' 'SIVA' 'SANJAY' 'BALA' 'GOKUL' 'PUJA' 'DHANUSH')

        echo "The total number of elements:${#NAME[@]}"

        echo "All elements of array:${NAME[@]}"

        echo "5th element of the array is:${NAME[4]}"


![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/018dccd8-9b78-4b02-8073-961c0f34d552)

![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/be1c1291-9eae-4f92-988e-bd239de1bff8)

