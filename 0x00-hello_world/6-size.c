#include <stdio.h>
/**
 * main - program entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu", sizeof(long));
	printf("%lu", sizeof(long long));
	printf("%lu", sizeof(float));
	return (0);
}
