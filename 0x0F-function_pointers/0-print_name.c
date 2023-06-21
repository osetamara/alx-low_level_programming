#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name e using to function
 * @name: string to add
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	/*Check if the name or function pointer is NULL*/
	if (name == NULL || f == NULL)
		return;

	/*Call the function pointed to by f, passing the name as an argument*/
	f(name);
}
