#inlcude "main.h"

/**
*print_numbers - function to print numbers from 0 to 9
*return: 0
*/

void print_numbers(void)
{
	char i;

	i = 0;
	while (i < 10)
	{
		_putchar('0' + i)
		i++
	}
	_putchar('\n');
}
