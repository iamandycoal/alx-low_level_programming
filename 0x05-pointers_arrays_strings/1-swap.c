#include "main.h"

/**
 * swap_int -Swaps the value of two int
 * @a: int 1
 * @b: int 2
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
