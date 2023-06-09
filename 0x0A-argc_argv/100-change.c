#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins make change for amount of money.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if successful, 1 otherwise.
 */
int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc != 2)/* Check if the number of arguments is incorrect*/
	{
		printf("Error\n");/*Print an error message*/
		return (1);/*Return 1 to indicate an error occurred*/
	}

	cents = atoi(argv[1]);/*Convert the argument to an integer*/

	if (cents < 0)/* Check if the amount is negative*/
	{
		printf("0\n");/*Print 0 since negative amount cannot be used*/
		return (0);/* Return 0 to indicate successful execution*/
	}
	while (cents > 0)/*Loop until the amount becomes 0*/
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;
		coins++;
	}
	printf("%d\n", coins);/* Print the total number of coins used*/
	return (0);
}
