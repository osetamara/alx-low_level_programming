#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	int j = 0;/*Index for iterating through the format string*/
	char *str, *sep = "";


	va_list list;/*Variable argument list*/
/*Initialize argument list with format as last named parameter*/
	va_start(list, format);


	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);/*Retrieve a string argument*/
					if (!str)
						str = "(nil)";/* If string is NULL, print "(nil)"*/
					printf("%s%s", sep, str);
					break;
				default:
					j++;/*Skip to the next character in format string*/
					continue;
			}
			sep = ", ";/*Update the separator string after first argument*/
			j++;/*Move to the next character in the format string*/
		}
	}
	printf("\n");/* Print a new line*/
	va_end(list);/* Clean up the argument list*/
}
