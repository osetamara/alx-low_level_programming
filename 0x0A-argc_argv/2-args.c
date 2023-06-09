#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: Argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*declaring variable*/
	int j = 0;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
