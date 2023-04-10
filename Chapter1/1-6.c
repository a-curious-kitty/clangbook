#include <stdio.h>

int main(void)
{
	printf("Press Cntl + D to signal EOF\n");
	printf("The expression getchar() != EOF evaluates to %d\n",
	getchar() != EOF);
}
