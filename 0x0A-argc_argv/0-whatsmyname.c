#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count argumentss
 * @argv: Argument
 *
 * Return: Always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
