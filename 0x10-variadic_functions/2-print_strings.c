#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
*
* Description: If separator is NULL, it is not printed.
*              If one of the strings if NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;/*Declares a variable*/
	char *str;
	unsigned int index;

/*Initializes the va_list variable with the variadic arguments*/
	va_start(strings, n);


	for (index = 0; index < n; index++)
	{
		/*Retrieves each string argument using va_arg and assigns to str*/
		str = va_arg(strings, char *);


		if (str == NULL)
			printf("(nil)");/*If the string is NULL, prints (nil)*/
		else
			printf("%s", str);


		if (index != (n - 1) && separator != NULL)
			/*Prints the separator unless it is the last string*/
			printf("%s", separator);
	}


	printf("\n");


	va_end(strings);/*Cleans up the va_list variable*/
}
