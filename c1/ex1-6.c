#include <stdio.h>

int main(void)
{
	printf("Press Enter or signal EOF(ctrl + d on linux)\n");
	printf("The expression getchar() != EOF evaluates to %d\n",
	getchar() != EOF);
}
