#include <stdio.h>
/**
 * main - program entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of char:%zu\n", sizeof(char));
	printf("Size of int:%zu\n", sizeof(int));
	printf("Size of long:%zu\n", sizeof(long));
	printf("Size of long long:%zu\n", sizeof(long long));
	printf("Size of float:%zu\n", sizeof(float));
	return (0);
}