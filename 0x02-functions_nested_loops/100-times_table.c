#include "main.h"

/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return: 0
 */

void print_times_table(int n)
{

int a = 0, repeat, b;

if (n < 0 || n > 15)
	return;

while (a <= n)
{
	for (b = 0; b <= n; b++)
	{
		repeat = a * b;
		if (b == 0)
			_putchar('0' + repeat);
		else if (repeat < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + repeat);
		}
		else if (repeat < 100)
		{
			_putchar(' ');
			_putchar('0' + repeat / 10);
			_putchar('0' + repeat % 10);
		}
		else
		{
			_putchar('0' + repeat / 100);
			_putchar('0' + (repeat - 100) / 10);
			_putchar('0' + repeat % 10);
		}
		if (b < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	a++;
}
}


