#include <stdio.h>

int main(void)
{
	int c, state;

	while  ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t')
			putchar('\n');
		else
			putchar(c);
	}
}

