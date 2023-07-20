#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even valued fibonacci numbers
 * Less than 4,000,000
 * Return: 0
 */
int main(void)
{
	int a = 0, c = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + c;
		a = c;
		c = next;
		if (next % 2 == 0)
			sum = sum + next;
	}
	printf("%i\n", sum);
	return (0);
}
