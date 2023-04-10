#include <stdio.h>

#define OUT = 0
#define IN = 1

int main(void)
{
	int c, i, counter;
	int wordlength[11];
	counter = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n' || c == ' ' || c == '\t')
			state = OUT;
		else if (state = OUT)
			state = IN;
	}

	printf("%d\n", counter);
