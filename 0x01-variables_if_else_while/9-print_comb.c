#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base = 10;
	int count = 0;
	int char_0 = 48;

	while (count < base)
	{
		putchar(count + char_0);
		if (count < 9)
		{
			putchar(',');
			putchar(' ');
		}
		++count;
	}
	putchar('\n');
	return (0);
}
