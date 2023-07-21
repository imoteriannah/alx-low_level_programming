#include <stdio.h>

/**
 * main - prime numbers of a large number
 *
 * Return: 0.
 */

int main(void)
{
	long int num = 612852475143;
	long int py;

	for (py = 2; py < num; py++)
	{
		if (num % py == 0)
		{
			num = num / py;
		}
	}
	printf("%ld\n", py);
	return (0);
}
