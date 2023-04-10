```
Exercises for Brian Kernighan's and Dennis Ritchie's "Programming in C Language" in Ubuntu.


Install c compiler:
$ sudo apt update
$ sudo apt install build-essential

To create or edit c files:
$ nano <file name.c>
or
$ vim <file name.c>

Main function must be defined as int main(void).

getline() is now a function in <stdio.h> change the name to something like get_line()

To compile programs:
$ cc <file name.c> 
To run the program:
$ ./a.out

To pipe test text file into program:
$ cat test.txt | ./a.out


File        Page      Exercise

1-1.c       8         Hello World!
1-2.c       8         Print special characters
1-3.c       13        Add heading to temperature conversion table
1-4.c       13        Switch conversion table to celsius to fahrenheit
1-5.c       14        Reverse order of temperature conversion table
1-6.c       17        Verify getchar() != EOF is 0 or 1 (Cntl + D to signal EOF)
1-7.c       17        Print value of EOF
1-8.c       20        Count blanks, tabs and newlines
1-9.c       20        Copy input to output replacing blanks > 1 for one blank
1-10.c      20        Copy input to output replacing tabs by \t, backspace by \b and backslash by \\
1-12.c      21        Print one word per line
1-14.c      24        Histogram of frequencies of different characters
1-15.c      27        Temperature conversion rewritten to use a function


2-1.c       36        Ranges of char, short, int and long signed and unsigned    
```




