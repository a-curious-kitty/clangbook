#include <stdio.h>

#define IN	1	/* inside a word */
#define OUT	0	/* outside a word */

int main(void)
{
	int c, nl, nw, state;

	state = OUT;
	while  ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t')
			putchar('\n');
		else
			putchar(c);
	}
}

