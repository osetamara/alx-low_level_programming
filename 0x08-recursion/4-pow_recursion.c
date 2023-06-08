#include "main.h"

/**
 * _pow_recursion - search a string for any of a set of bytes
 * @x: base
 * @y: exposant
 * Return: pointer to bytes in 's' that matches one of the bytes in 'accept'
 * or null if no such bytes is found
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);/*Return -1 for invalid input (negative exponent*/
	else if (y == 1)
		return (x);/*Base case: if exponent is 1, return base number*/
	else if (y == 0)
		return (1);/*Base case: any number raised to power of 0 is 1*/
	return (x * _pow_recursion(x, y - 1));/*Recursive call: multiply x by*/
}
