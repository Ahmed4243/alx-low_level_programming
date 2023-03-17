#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 * no paramters
 *
 * Description: Determines whether a random number is positive, 0 or negative
 * Returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else
		if(n == 0)
			printf("%d is zero\n", n);
		else
			printf("%d is negative\n", n);
	return (0);
}
