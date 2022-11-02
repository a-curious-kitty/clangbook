Exercises for Brian Kernighan's and Dennis Ritchie's Programming in C Language Book.

Notes

In a fresh ubuntu install install c compiler with:

$ sudo apt update
$ sudo apt install build-essential


In ubuntu pressing Ctrl + D signals the end of file(EOF)


Type:

$ nano <file name>.c

or

$ vim <file name>.c

to create/edit source files(make sure they end in .c).


Type:

$ cc <file name> 

to compile, and

$ ./a.out

to run programs.


Must use int main(void) for the main function definition or you will get a warning.


getline() is now a function in <stdio.h> so it must be change to something like get_line().


Chapter 1

File name	Corresponding book part

11.c		1.1 Hello World
ex1-2.c		Exercise 1-2
12.c		1.2 Fahrenheit-Celsius table
12f.c		1.2 Fahrenheit-Celsius table(float)
ex1-3.c		Exercise 1-3
ex1-4.c		Exercise 1-4
13.c		1.3 Fahrenheit-Celsius table(for loop)
ex1-5		Exercise 1-5
14.c		1.4 Fahreheit-Celsius table(Symbolic Constants)
15.c		1.5 Copy input to output
ex1-6.c		Exercise 1-6
ex1-7.c		Exercise 1-7
15c1.c		1.5.2 Character counting
15c2.c		1.5.2 Character counting (2nd version)
15l.c		1.5.3 Line counting
ex1-8.c		Exercise 1-8
ex1-9.c		Exercise 1-9
ex1-x.c		Exercise 1-10













