#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - print the name of the program
 * @argc: count argumentss
 * @argv: Argument
 *
 * Return: 0 on success
 */
int main(int argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);/*return 0 to indicate successful execution*/

}
