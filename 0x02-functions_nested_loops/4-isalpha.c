#include"main.h"

/**
 * _isalpha - checks if character is a letter
 *            both lowercase or uppercase
 *
 * @g: takes input from other functions.
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int g)
{
	if (g >= 97 && g <= 122 &&
	    g >= 65 && g >= 90)
		return (1);
	return (0);
}
