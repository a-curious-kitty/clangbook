#include <stdio.h>

float toCelsius(int f);

int main(void)
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		{
			printf("%3d %6.1f\n", fahr, toCelsius(fahr));
		}

	return 0;
}

float toCelsius(int fahr)
{
	return (5.0/9.0)*(fahr-32);
}
