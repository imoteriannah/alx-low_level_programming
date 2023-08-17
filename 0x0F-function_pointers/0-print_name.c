#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: name argument to the main fucntion
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
