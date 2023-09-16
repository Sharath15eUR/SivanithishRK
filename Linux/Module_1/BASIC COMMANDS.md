
Assignment 4:BASIC COMMANDS
  1) Commands are actually files containing programs, often written in C.
     How will you find out in which directory does  the file corresponding to the man command 
     resides?

            Type man
  2)How will you find out what is the use of the ps command.
        
        man ps
        whatis ps










Assignment 10:Linux process

1. Open a terminal. Now spawn three shell processes one after another i.e. first spawn one shell, then from the spawned shell, spawn one new shell and so on. Now, 
   how can you see the PID of the current shell ? How can you see the PID of the shell which is the grandparent of the current shell?
        sh
        sh
        sh
        echo $$
        ps -f


2. How can you see all the processes (both system & user processes) in your computer?
   The output can be quite large.  How can you view the output as multipage output ? 
   How can you store the output in a file named process_info?
        ps -e
        ps -e|more
        ps -e 1 >>process_info

       






   
