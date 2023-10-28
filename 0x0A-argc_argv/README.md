# `C - argc and argv
This was an exercise to practice on the use main with the default parameter arguments

`0-whatsmyname.c` -  This prints the name of a program that is being executed. It is usually the value in the **argv[0]** index.  
`1-args.c` -
`2-args.c` -  
`3-mul.c` - Multiplies two numbers with a restriction that returns 0 if arguments are less than 3  
`4-add.c` -  
`100-change.c` - 

# `0-whatsmyname`
Write a program that prints its name, followed by a new line.
* If you rename the program, it will print the new name, without having to compile it again
* You should not remove the path before the name of the program
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 
```
