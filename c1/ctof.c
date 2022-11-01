#include <stdio.h>

/* print  Fahrennheit-Celsius table
   for fahr = 0, 20, ..., 300 */

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	printf("cel     fah\n");
	printf("===========\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32.0;
		printf("%3.0f %7.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

