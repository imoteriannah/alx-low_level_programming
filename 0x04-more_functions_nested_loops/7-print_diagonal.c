#include "main.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to print
 * Return: 0
 */

void print_diagonal(int n)
{

	int i = 0, c;

	while (i < n && n > 0)
	{
		c = 0;
		while (c < i)
		{
			_putchar(' ');
			c++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
