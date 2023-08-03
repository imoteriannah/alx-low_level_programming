#include "main.h"
#include <stdio.h>

/**
 * is_prime - check if number is prime
 * @n: int
 * @r: int
 * Return: int
 */

int is_prime(int n, int r)
{

	if (r >= n && n > 1)
		return (1);
	else if (n % r == 0 || n <= 1)
		return (0);
	else
		return (is_prime(n, r + 1));
}
/**
 * is_prime_number - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */


int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
