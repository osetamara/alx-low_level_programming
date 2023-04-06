#include <stdio.h>

/**
 * tmain - function executed before the main
 * Return: no return
 */
void __attribute__ ((constructor)) tmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
