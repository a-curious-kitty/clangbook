#include <stdio.h>

#define MAXLINE 20

int main(void)
{
	char s[MAXLINE];
	int lim = MAXLINE;

	int i = 0;
	int c;

	while (i < lim - 1)
	{
		if ((c = getchar()) != '\n')
			if (c != EOF)
				s[i] = c;
		i++;
	}

	//Testing the above
	s[MAXLINE - 1] = '\0';

	for (i = 0; i < MAXLINE; i++)
		putchar(s[i]);
}
