#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int small_a = 97;
	int capital_a = 65;
	int small_z = 123;
	int capital_z = 91;

	while (small_a < small_z)
	{
		putchar(small_a);
		++small_a;
	}
	while (capital_a < capital_z)
	{
		putchar(capital_a);
		++capital_a;
	}
	putchar('\n');
	return (0);
}
