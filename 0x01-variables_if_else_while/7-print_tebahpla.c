#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int start = 96;
	int stop = 122;

	while (start < stop)
	{
		putchar(stop);
		--stop;
	}
	putchar('\n');
	return (0);
}
