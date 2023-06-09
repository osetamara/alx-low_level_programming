#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, d, m, len, f, digit;

	j = 0;
	d = 0;
	m = 0;
	len = 0;
	f = 0;
	digit = 0;


	/*Find the length of the string*/
	while (s[len] != '\0')
		len++;

	/*Loop through the string to extract the integer value*/
	while (j < len && f == 0)
	{
		if (s[j] == '-')
			++d;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (d % 2)
				digit = -digit;
			m = m * 10 + digit;
			f = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			f = 0;
		}
		j++;
	}
	if (f == 0)
		return (0);

	return (m);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	/*Check if the number of arguments is correct*/
	if (argc != 3)
	{
		printf("Error: Two arguments are required.\n");
		return (1); /*Return error code*/
	}
	/*Convert the command-line arguments to integers*/
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	/*Check if the conversion was successful*/
	if (num1 == 0 || num2 == 0)
	{
		printf("Error: Invalid input. Please provide valid integer values.\n");
		return (1); /*Return error code*/
	}
	/* Perform the multiplication*/
	result = num1 * num2;

	/* Print the result*/
	printf("Result: %d\n", result);

	return (0); /* Return success code*/
}
