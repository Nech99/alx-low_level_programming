#include <stdio.h>

/**
  * main - Prints decimal numbers from 0 to 9
  *
  * Return: Always (Success)
  */
int main(void)
{
	int dec;

	for (dec = '0'; dec <= '9'; dec++)
	{
		putchar(dec);
	}

	putchar('\n');

	return (0);
}
