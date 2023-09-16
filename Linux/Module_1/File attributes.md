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
