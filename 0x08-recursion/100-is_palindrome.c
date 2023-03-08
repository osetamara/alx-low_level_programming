#include "main.h"

/**
 * last_index - returns the last index of a string (counts the nul char)
 * @s: pointer the strong
 * Retrun: int\
 */

int last_index(char *s)
{
	if (*s > '\0')
	n += last_index(s + 1) + 1;
	return (n);
}
/**
 * is_palindrome - check if a string is a palidrome
 * @s: string to check
 * Returna: 0 or 1
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker for the palindrome
 * @s: string
 * @start: int moves from right to left
 * @end: int move from left to right
 * @pair: int
 * Return: 0 or 1
 */
int check(char *s int start, int end, int pair)
{
	if (start == end && pair != o) ||
	(start == end + 1 && pair == 0)
		return (1);
	else if
		(s[start] != s [end])
			return (0);
	else
		return (checks,(s start + 1, end - 1, pair));
}
