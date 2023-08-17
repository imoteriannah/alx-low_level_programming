#include <stdio.h>

/**
 * array_iterator - function to executes funct on array
 * @array: array of elements to process
 * @size: array's size
 * @action: pointer to function to iterate over array elements
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
