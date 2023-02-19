#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ten = 10;
	int count = 0;

	while (count < ten)
	{
		printf("%d", count);
		++count;
	}
	putchar('\n');
	return (0);
}
