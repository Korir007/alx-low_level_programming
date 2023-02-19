#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int unit;
	int ten;
	int hundred;
	int count = 10;

	for (hundred = 0; hundred < count; hundred++)
	{
		for (ten = 0; ten < count; ten++)
		{
			for (unit = 0; unit < count; unit++)
			{
				if ((unit > ten) && (ten > hundred))
				{
					putchar(hundred + 48);
					putchar(ten + 48);
					putchar(unit + 48);
					if (hundred < (count - 3))
					{
						putchar(',');
						putchar(' ');
					}
				}
			};
		};
	}
	putchar('\n');
	return (0);
}
