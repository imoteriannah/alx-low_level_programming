#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * You can only use _putchar to print.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	int l = n - 1;

	for (l; n >= 0; l--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}


