#include  <stdio.h>

/**
 * main - prints various variables.
 *
 * Return: 0(Success)
 *
 */

int main(void)
{

	/*sizeof evalutes the sizo of various variables*/
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	printf("Size of an double: %lu byte(s)\n", sizeof(double));
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));


	return (0);

}
