#include "main.h"

/**
 * factorial - finds factorial  that returns the factorial of given number.
 * @n: number for which factorial is to be calculated.
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);/*Return -1 for invalid input (negative number*/
	}
	else if (n == 0)
	{
		return (1);/* Base case: factorial of 0 is 1*/
	}
	/*Recursive call: Multiply the number by factorial of (number - 1*/
	return (n * factorial(n - 1));
}
