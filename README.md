```
Exercises for Brian Kernighan's and Dennis Ritchie's Programming in C Language Book.

On a fresh ubuntu install:

$ sudo apt update
$ sudo apt install build-essential
to install c

$ nano <file name.c>
or
$ vim <file name.c>
to create/edit source files(make sure they end in .c).

$ cc <file name.c> 
to compile, and
$ ./a.out
to run programs.

cat testtext.txt | <filename.c>
to pipe the contents of text file into program.

Ctrl + d signals the end of file(EOF)

Must use int main(void) for the main function definition or you will get a warning.

getline() is now a function in <stdio.h> so it must be change to something like get_line()


File name	Corresponding book part

11.c		1.1 Hello World
e1-2.c		Ex 1-2
12.c		1.2 Fahrenheit-Celsius table
12f.c		1.2 Fahrenheit-Celsius table(float)
e1-3.c		Ex 1-3
e1-4.c		Ex 1-4
13.c		1.3 Fahrenheit-Celsius table(for loop)
e1-5		Exercise 1-5
14.c		1.4 Fahreheit-Celsius table(Symbolic Constants)
15.c		1.5 Copy input to output
e1-6.c		Ex 1-6
e1-7.c		Ex 1-7
15c1.c		1.5.2 Character counting
15c2.c		1.5.2 Character counting (2nd version)
15l.c		1.5.3 Line counting
e1-8.c		Ex 1-8
e1-9.c		Ex 1-9
e1-x.c		x 1-10
e1-x2.c		Ex 1.12
16.c		Count digits, white space, others(Arrays)
e1-x4.c		Ex1.14
17.c		1.7 Power (Function)
18.c		1.8 Power (Arguments Call by value)
19.c		1.9 Print longest line(character arrays)
1x.c		1.10 Print longest input line(specialized version)

```




