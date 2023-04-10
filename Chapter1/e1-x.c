#include <stdio.h>

int main(void)
{
	int c, tab;
	
	while ((c = getchar()) != EOF){
		if (c == '\t'){
			putchar('\\');
			putchar('t');
		}
		else if (c == '\\'){
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
	}
}
