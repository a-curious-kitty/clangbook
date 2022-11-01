#include <stdio.h>

int main(void)
{
	int c, scount;
	while ((c = getchar()) != EOF){
		if (c == ' ') {
			++scount;
		}
		else {
			scount = 0;
		}
		
		if (scount <= 1)
			putchar(c);
	}
}

