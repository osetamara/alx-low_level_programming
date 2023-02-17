#include <stdio.h>

/**
 * main - print alphabet lower and upper case
 * Return: 0
 */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
