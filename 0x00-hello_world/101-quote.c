#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[60];
	size_t i = 0;

	strcpy(string, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");

	while  (i < strlen(string))
	{
		putc(string[i], stderr);
		++i;
	}
	putc('\n', stderr);
	return (1);
}
