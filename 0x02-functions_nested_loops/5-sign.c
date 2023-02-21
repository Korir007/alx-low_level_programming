#include "main.h"

/**
 * print_sign - return 0 letter not lowercase, 1 letter lowercase
 *
 * @j: the int to print
 *  Return: Always 0.
  */
int print_sign(int j)
{
	if (j > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (j == 0)
	{
		_putchar ('0');
		return (0);
	}

	else
	{
		_putchar ('-');
		return (-1);
	}

}
