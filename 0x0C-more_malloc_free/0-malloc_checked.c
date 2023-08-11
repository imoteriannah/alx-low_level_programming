#include "main.h"

/**
 * malloc_checked - funcation that allocates memory using malloc
 * @b: number of bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
