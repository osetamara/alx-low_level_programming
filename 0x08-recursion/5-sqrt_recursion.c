#include "main.h"

/**
 * _sqrt_helper - finds the square root of a number using recursion
 * @n: the number to find the square root of
 * @guess: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
