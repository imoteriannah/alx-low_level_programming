#include "main.h"

/**
 * print_triangle - program to print triangel
 * @size : integer variable for the size of traiangle
 * Return: 0
 */

void print_triangle(int size)
{

	int i = 1, c;

	while (i <= size && size > 0)
	{
		c = 0;
		while (c < size - i)
		{
			_putchar(' ');
			c++;
		}
		c = 0;
		while (c < i)
		{
			_putchar('#');
			c++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
