#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: pointer the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int n = 0;/*declaring variable to keep track of length*/

	if (*s > '\0')
	{
		/*Recursive call: move to next character in string*/
		n += _strlen_recursion(s + 1);
		/*Increment length by 1 for each character encountered during recursion*/
		n++;
	}
	return (n);/*Return the length of the string*/
}
