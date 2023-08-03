#include "main.h"

/**
 * factorial - function that prints the factorial of a number
 * @n: number whose factorial is to be found
 * Return: factorial of the number
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
