
Assignment 4:BASIC COMMANDS
  1) Commands are actually files containing programs, often written in C.
     How will you find out in which directory does  the file corresponding to the man command 
     resides?
        Type man
  2)How will you find out what is the use of the ps command.
        man ps
        whatis ps


Assignment 5:General Purpose Utilities in Linux
   1)Display the calender for the month of March 2012
        cal 03 2012
   2)List all the files and directories of the directory /usr/lib on the terminal. Now put 
     the same information in a file named results. Display the contents of the file results now.
         ls /user/bin
         ls -l > results
         cat results


Assignment 6:File Systems 
    1)Make a directory structure like this in your home directory.
         mkdir demodir
         cd demodir
         mkdir inside_demo also_inside_demo
         mkdir also_inside_demo/abc also_inside_demo/abc_123

   2) Remove the also_inside_demo directory.
         Rmdir abc abc_123
         Cd demodir
         Rmdir also_inside_demo
              OR
         rm-rf also_inside_demo


Assignment 8:File Attributes:
  1. Create a file abc.txt and change the ownership of this file to some other user on your machine,
   and also change the group to family.
         cat > abc.txt
         sudo chown user2 abc.txt
         sudo chgrp family abc.txt

  2. Create a file exercise.txt and make it  executable.
         cat > exercise.txt
         chmod u+x exercise.txt

  3. Create a file test.txt on your desktop and identify its inode number, also create a softlink
   for test.txt in your home.
         cat > test.txt
         ls -i test.txt
         ln -s test.txt /home/siva/link_text.txt


Assgnment 9:Redirection of Pipes
  1. Create a file name error_log in your current directory. Suppose you do not have any file named aa11 in your current directory. 
     How  can you redirect the error message to the file error_log when we apply the command "wc -l aa11" ?  
         wc -l  aa11 2 >> error_log
     How can you ensure that all the error log are appended to the error_log file?
         cat error_log

 2. Create  files named test1, test2, testa, testb
   How can you count the number of  files starting with test and then having only one digit in their 
   name using only a single line command ?
         cat test1
         cat test2
         cat testa
         cat testb
         ls | grep -E "test[0-9]" | wc -l


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

       






   
