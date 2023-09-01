#include "main.h"
#include <stdio.h>
/**
 * get_bit - function to get the value of a bit at a given index
 * @n: number to evaluate
 * @index: index of bit starting from 0
 * Return: Value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
