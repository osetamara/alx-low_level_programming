#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - Multiplies two numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: Product of num1 and num2
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	char *num1_str = argv[1];
	char *num2_str = argv[2];
	/*Check if num1 and num2 are composed of digits only*/
	for (int i = 0; num1_str[i] != '\0'; i++)
	{
		if (!isdigit(num1_str[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	for (int i = 0; num2_str[i] != '\0'; i++)
	{
		if (!isdigit(num2_str[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	/*Convert num1 and num2 from strings to integers*/
	int num1 = atoi(num1_str);
	int num2 = atoi(num2_str);
	/*Perform the multiplication*/
	int result = multiply(num1, num2);
	/*Print the result*/
	printf("%d\n", result);

	return (0);
}
