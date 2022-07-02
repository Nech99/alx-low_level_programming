#include <stdio.h>

/**
  * main - Prints decimal numbers  0 to 9
  *
  * Return: Always (Success)
  */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}

	putchar('\n');

	return (0);
}
