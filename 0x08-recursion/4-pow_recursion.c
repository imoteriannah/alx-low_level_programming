#include "main.h"

/**
 * _pow_recursion - function to print the pow of a number
 * @x: base of operation
 * @y: exposant of the operation
 * Return: number to the exponent
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
