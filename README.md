# Exercises for Brian Kernighan's and Dennis Ritchie's "Programming in C Language" in Ubuntu.
## Setup
Install c compiler:
```
$ sudo apt update
$ sudo apt install build-essential
```

&nbsp;  

To create or edit c files:
```
$ nano <file name.c>
```
or
```
$ vim <file name.c>
```

&nbsp;  

To compile programs:
```
$ cc <file name.c> 
```
To run the compiled program:
```
$ ./a.out
```

&nbsp;  

To pipe test text file into program:
```
$ cat test.txt | ./a.out
```

&nbsp;  

## Notes

-Define main function as int main(void) to avoid compiling warnings.

-In chapter 1, getline() is now a function in <stdio.h> so change the name to something like get_line().

&nbsp;  

## Contents
```

File        Page      Exercise

Chapter 1

1-1.c       8         Hello World!
1-2.c       8         Print special characters
1-3.c       13        Add heading to temperature conversion table
1-4.c       13        Switch conversion table from celsius to fahrenheit
1-5.c       14        Reverse order of temperature conversion table
1-6.c       17        Verify getchar() != EOF is 0 or 1 (Cntl + D to signal EOF)
1-7.c       17        Print value of EOF
1-8.c       20        Count blanks, tabs and newlines
1-9.c       20        Copy input to output replacing blanks > 1 to one blank
1-10.c      20        Copy input to output replacing tabs to \t, backspace to \b and backslash to \\
1-11.c      21        (missing) Testing word count program for errors
1-12.c      21        Print one word per line
1-13.c      24        (missing) Histogram of words lengths
1-14.c      24        Histogram of frequencies of different characters
1-15.c      27        Temperature conversion rewritten to use a function
1-16.c      30        (missing)
1-17.c      31        (missing)
1-18.c      31        (missing)
1-19.c      31        (missing)
1-20.c      34        (missing)
1-21.c      34        (missing)
1-22.c      34        (missing)
1-23.c      34        (missing)
1-24.c      34        (missing)

Chapter 2

2-1.c       36        Ranges of char, short, int and long signed and unsigned
2-2.c       42        Equivalent loop to the for loop in page 41 without using && or ||
```




