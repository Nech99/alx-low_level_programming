#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @d: integer
 *
 *
 * Return: last digit
 */
int print_last_digit(int d)
{
	d = d % 10;

	if (d < 0)
	{
		d = d * -1;
	}

	_putchar('0' + d);
	return (d);
}

