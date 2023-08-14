#include <stdio.h>
/**
 * main - Entry point.
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
				putchar(j + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
