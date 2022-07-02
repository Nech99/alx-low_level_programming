#include <stdio.h>

/**
 * main - Print alphabets in both lowercase and uppercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
