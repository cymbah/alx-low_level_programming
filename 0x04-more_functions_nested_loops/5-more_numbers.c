#include "main.h"

/**
 * more_numbers - function prints 10 times the number
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		if (j >= 10)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}

