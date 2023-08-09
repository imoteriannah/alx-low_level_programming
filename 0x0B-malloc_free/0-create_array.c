#include "main.h"

/**
 *create_array - function to print an array of characters
 *@size: number elements in the array
 *@c: char to be printed
 *Return: cont
 */

char *create_array(unsigned int size, char c)
{
	char *cont;
	unsigned int pos;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	cont = (char *) malloc(size * sizeof(c));

	if (cont == 0)
	{
		return (NULL);
	}

	else
	{
		pos = 0;
		while (pos < size) /*While for array*/
		{
			*(cont + pos) = c;
			pos++;
		}

		return (cont);
	}

}
