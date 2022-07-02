#include <stdio.h>

/**
  * main - Prints alphabet inversely
  *
  * Return: Always (Success)
  */
int main(void)
{
	char inv;

	for (inv = 'z'; inv >= 'a'; inv--)
	{
		putchar(inv);
	}

	putchar('\n');

	return (0);
}
