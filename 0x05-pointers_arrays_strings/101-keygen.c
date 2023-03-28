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
	char password[passwd + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[];:,.<>?";
	int i = 0;

	srand(time(NULL));

	for (i < passwd; i++;)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
		password [passwd] = '\0';
	}
	printf("Your random password is: %s\n", password);

	return (0);
}
