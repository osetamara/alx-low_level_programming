#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - print the name of the program
 * @argc: count argumentss
 * @argv: Argument
 *
 * Return: Always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	(void) argc;/*This line is used to silence the "unused parameter" warning*/

	char *programName = strrchr(argv[0], '/');

	if (programName)
		programName++;

	if  (programName)
	{
	printf("%s\n", programName);/* Exit the program with a status of 0 (success)*/
	}
	else
	{
		fprintf(stderr, "failed to retrieve program name\n");
		exit(1);/*exit the program eith a non-zero status an error*/
	}
	return (0);/*return 0 to indicate successful execution*/

}
