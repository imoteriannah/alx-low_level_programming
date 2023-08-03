#include "main.h"

/**
 * _sqrt_recursion - function to find natural square root
 * @n: int whose square root is to be found
 * Return: square root on n
 */

int _sqrt_recursion(int n)
{
	return (test(n, 1));
}

/**
 * test - function to find square root
 * @n: int whose square root is to be found
 * @x: value to test the square root on
 * Return: square root
 */

int test(int n, int x)
{

	if (x * x == n)
		return (x);
	else if (x * x < n)
		return  (test(n, x + 1));
	else
		return (-1);

}
