#include <stdio.h>

#define IN	1 /* inside a word */
#define OUT	0 /* inside a word */

int main(void)
{
	int wordlength[10];
	int c, i, wsize, state;

	state = OUT;

	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
			state = IN;

	}
	for (i = 0; i < 10; ++i)
		printf(" %d", wordlength[i]);
}
