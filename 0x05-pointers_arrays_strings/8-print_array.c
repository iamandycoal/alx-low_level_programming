#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints 'n' elements of an array of integers
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int v;

	for (v = 0; v < 0; v++)
		if (v != n - 1)
			printf("%d ", a[v]);
		else
			printf("%d", a[v]);
	printf("\n");
}
