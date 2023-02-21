
#include "main.h"

/**
 * print_last_digit - Print the last digit of a
 * @a: The int to check
 *
 * Return: Last digit of a
 */
int print_last_digit(int a)
{
	if (a > 0)
	{
		_putchar((a % 10) + 48);
		return (a % 10);
	}
	else if (a == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar((-1 * (a % 10)) + 48);
	return (-1 * (a % 10));
}