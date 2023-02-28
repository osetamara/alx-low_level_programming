#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
/**
 * main - print random valid passwords for the program 101-crackme.
 *
 * Return: 0 Always
 */

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char *valid_chars = "abcdefghijklmnopqrstuvwxyz0123456789";

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = valid_chars[rand() % 62];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
