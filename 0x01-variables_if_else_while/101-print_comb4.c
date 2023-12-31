#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible 3 digit numbers
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		/*First entry into the digits*/
		d = 0;
		while (d < 10)
		{
			/*iterating on the second digit*/
			c = 0;
			while (c < 10)
			{
				/*equality and sorting tests*/
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}

