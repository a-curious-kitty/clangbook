#include <stdio.h>

int a = -1;

main()
{
	printf("The value of EOF is %d\n", EOF);
	printf("The expression getchar() = EOF evaluates to %d\n", a == EOF);
	return 0;
}
