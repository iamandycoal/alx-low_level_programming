#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum = sum + c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}

/*int main(void)
{
	char password[passwd + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[];:,.<>?";
	int i = 0;

	srand(time(NULL));

	for (i = 0; i < passwd; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
		password [passwd] = '\0';
	}
	printf("Tada! Congrats: %s\n", password);

	return (0);
}*/
