#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int fl_d;
	int ll_d;
	int c2;
	int fl_d2;
	int ll_d2;

	while (c <= 98)
	{
		fl_d = (c / 10 + '0');
		ll_d = (c % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			fl_d2 = (c2 / 10 + '0');
			ll_d2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(fl_d);
				putchar(ll_d);
				putchar(' ');
				putchar(fl_d2);
				putchar(ll_d2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
