#include <stdio.h>
/**
 * main - main program entry block
 * Description: compute the fibonacci series
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 0, c = 1, next;

	while (i < 50)
	{
		next = a + c;
		a = c;
		c = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
