#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function to carry out addition
 * @a: argm 1
 * @b: argm 2
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to carry out subtraction
 * @a: arg to subtracted from
 * @b: arg to subtract
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to carry out multiplication
 * @a: arg to multp 1
 * @b: arg to multp 2
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to carry out division
 * @a: divisr argument
 * @b: dividend argument
 * Return: result
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - function to carry out modulo operation
 * @a: argument 1
 * @b: argument 2
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
