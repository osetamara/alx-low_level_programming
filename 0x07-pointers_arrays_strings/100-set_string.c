#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer
 * @to: pointer
 *
 * return: 0 always
 */
void set_string(char **s, char *to)
{
	/*declare variable*/
	int length = strlen(to);

	/*allocate memory for the new string*/
	*s = (char *)malloc((length + 1) * sizeof(char));
	/*copy the content of 'to' the newly allocate memory*/
	strcpy(*s, to);
}

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	char *str = NULL;
	char *new_str = "Hello, World!";

	set_string(&str, new_str);

	printf("str: %s\n", str);

	free(str);

	return (0);
}
