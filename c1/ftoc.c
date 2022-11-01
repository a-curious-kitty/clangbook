#include <stdio.h>

/* print  Fahrennheit-Celsius table
	 celsius  for fahr = 0, 20, ..., 300 */
float conversion(float fahr);

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	printf("fah     cel\n");
	printf("===========\n");

	fahr = lower;
	while (fahr <= upper) {
		printf("%3.0f %7.1f\n", fahr, conversion(fahr));
		fahr = fahr + step;
	}
}

float conversion(float fahr)
{
	return (5.0/9.0) * (fahr - 32);	
}
