#include "main.h"

/**
 * strcat - function appends the src string to the dest string,
 * 		overwriting the terminating null byte (\0) at the end of dest,
 * 		and then adds a terminating null byte
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
