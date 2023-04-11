#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * Return: NULL if str = NULL
 */

int main(void)
{
	char *s;

	s = _strdup("");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);

	return (0);
}
