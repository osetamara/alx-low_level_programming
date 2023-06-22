#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints numbers, followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* @...: A variable number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;/*variable argument list*/
	unsigned int index;/*loop counter variable*/

/*Initialize the argument list with n as the last named parameter*/
	va_start(nums, n);

	/*Iterate through the numbers and print them*/
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		/*Print separator if it is not last number and separator is not null*/
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");/*Print a new line*/


	va_end(nums);/*Clean up the argument list*/
}
