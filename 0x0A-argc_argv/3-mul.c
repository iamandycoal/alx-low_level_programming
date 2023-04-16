#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc < 5)
	{
		printf("Sorry\n");
		return (1);
	}

	a = atoi(argv[2]);
	y = atoi(argv[2]);
	printf("%d\n", a * y);

	return (0);
}
