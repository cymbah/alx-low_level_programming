#include <stdio.h>
/**
 * main - Entry point.
 * Return:0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		putchar(i < 10 ? i + '0' : i - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
