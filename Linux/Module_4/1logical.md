Logical Operators

1) Check whether the file exists and is executable using logical operators.
   Hint:man test



          #!/bin/bash
          if [ -f $1 ] && [ -x $1 ] ; then
             echo "File exist and it is executable"
          elif [ -f $1 ] && [ ! -x $1 ] ; then 
             echo "File exist and it is not executable"
          elif [ ! -f $1 ] ; then 
             echo "file does not exist"
           fi

![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/d4f17bc1-0854-4f6b-9099-fb4615007d07)
