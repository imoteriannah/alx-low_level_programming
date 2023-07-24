#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @str: pointer to the string to check
 * Return: 0
*/


int _puts(char *str)
{
	int l = 0;

	while (str[l])
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}

