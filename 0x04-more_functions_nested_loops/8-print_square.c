#include "main.h"

/**
 * print_square - check for a digit
 * @n : number of _ to print
 * Return: 0
 */

void print_square(int n)
{

	int i = 0, c;

	while (i < n && n > 0)
	{
		c = 0;
		while (c < n)
		{
			_putchar('#');
			c++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
