#include <stdio.h>
#include <stdlib.h>

/**
* main - prints its own opcodes
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int bytes, j;/* Declare variables 'bytes' and 'i'*/
	char *arr;/* Declare a character pointer 'arr'*/

	/* Check if number of command-line arguments is not equal to 2*/
	if (argc != 2)
	{
		printf("Error\n");/* Print an error message*/
		exit(1);
	}

	/*Convert the command-line argument to an integer and assign it to 'bytes'*/
	bytes = atoi(argv[1]);


	if (bytes < 0)/*Check if the value of 'bytes' is less than 0*/
	{
		printf("Error\n");
		exit(2);
	}
/*Assign the address of the 'main' function to the character pointer 'arr'*/
	arr = (char *)main;
/*Iterate 'bytes' number of times*/
	for (j = 0; j < bytes; j++)
	{
		if (j == bytes - 1)/*Check if it's last byte to print*/
		{
			printf("%02hhx\n", arr[j]);
			break;
		}
		printf("%02hhx ", arr[j]);
	}
/*Return 0 to indicate successful program execution*/
	return (0);
}
