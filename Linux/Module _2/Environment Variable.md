Environment Variable

1. How can you know what is the secondary command prompt set your system ?

          echo $PS2
   How can you change the secondary command prompt from the default to your username ?

          PS2="$LOGNAME"

2. How can you ensure that the mv command (used for renaming a file) always asks for permission before overwriting an existing destination file ? 
   [ Hint : use alias command ]

          alis mv="mv-i"
