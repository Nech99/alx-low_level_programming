#include "main.h"
/**
* print_alphabet -> prints from a to z
* Return : 0 always success
*/

void print_alphabet(void)
{
	int j;

	for (j = 'a' ; j <= 'z'; j++)
	{
		_putchar(j);
	}
	 _putchar('\n');
}
