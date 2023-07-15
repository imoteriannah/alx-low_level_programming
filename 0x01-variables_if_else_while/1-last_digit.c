#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Porogram enttry
 * Return: 0
 */
int main(void)
{
	int n;
	int last_D;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_D = n % 10;

	if (last_D > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last_D);
	else if (last_D == 0)
		printf("Last digit of %i is %i and is 0\n", n, last_D);
	else if (last_D < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_D);
	return (0);
}

