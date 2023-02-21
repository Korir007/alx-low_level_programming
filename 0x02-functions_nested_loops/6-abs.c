#include"main.h"

/**
 * _abs - function that computes the absolute
 *       value of an integer
 *
 * @a: takes in integer type input for function
 *
 * Return: Always 0 (Success)
*/

int _abs(int a)
{
	if (a < 0)
		a = (-1) * a;
	return (a);
}
