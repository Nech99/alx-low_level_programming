#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a number randomly
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n, lsd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lsd = n % 10;

	if (lsd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lsd);
	}
	else if (lsd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lsd);
	}
	else if (lsd < 6 && lsd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lsd);
	}

	return (0);
}
