#include <stdio.h>
/**
 * main - Entry point.
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	printf("%d", '\n');
	return (0);
}
