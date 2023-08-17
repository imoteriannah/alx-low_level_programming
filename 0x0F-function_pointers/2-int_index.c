#include "function_pointers.h"

/**
 * int_index - fucntion to searche for an integer
 * @array: array of elements to be searched
 * @size: number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: IF size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
