#include <stdio.h>

/**
 * main - Program entry point
 * @argc: number of arguments passed to the program
 * @argv: array of the arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
