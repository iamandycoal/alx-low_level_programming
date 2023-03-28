#include "main.h"

/**
 * _strcpy - function copies a string
 * @dest: char to check and return
 * @src: char to check
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int v;

	for (v = 0; src[v] != '\0'; v++)
		dest[v] = src[v];
	dest[v] = '\0';

	return (dest);
}
