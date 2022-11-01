#include <stdio.h>

int main(void)
{
	int c, ns;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++ns;
		else if (c == '\t')
			++ns;
		else if (c == ' ')
			++ns;
	printf("%d\n", ns);
}
