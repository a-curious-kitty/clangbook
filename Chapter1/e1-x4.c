#include <stdio.h>

int main(void)
{
	int c, i, j, lettercount[26];

	for (i = 0; i < 26; ++i)
		lettercount[i] = 0;

	while ((c = getchar()) != EOF){
		if (c >= 'a' && c <= 'z')
			++lettercount[c-'a'];
		else if (c >= 'A' && c <= 'Z')
			++lettercount[c-'A'];
	}

	for (i = 0; i < 26; ++i){
		printf("%c ", 97 + i);
		for (j = 0; j < lettercount[i]; ++j)
			printf ("|");
		printf("\n");	
	}
}
