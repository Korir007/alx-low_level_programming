#include "main.h"

/**
 * _islower - Checks c if it is lower case
 * @c: The character to prin
 *
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	if (c < 97)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
