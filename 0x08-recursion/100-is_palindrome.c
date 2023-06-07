#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	/*check for special case*/
	if (*s == '\0')
		return (1);

	else
	{
		/*Check if number is divisible by any number from 2 its square root*/
		int len = strlen(s);

		if (s[0] != s[len - 1])
			return (0);/*Not a palindrome*/

		else
		{
			/*Move to the next pair of characters and check recursively*/
			s[len - 1] = '\0';/*Remove the last character*/
			return (is_palindrome(s + 1));
		}
	}
}
