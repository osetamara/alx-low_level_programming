#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: The number of parameters passed to the function.
 * @....: A variadic number of parameter to calculate the sum of
 *
 * Return: if n == 0 - 0.
 * otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;/*declares a variable of type va_list*/
	unsigned int j, sum = 0;/*declare variable*/


	va_start(ap, n);/*initialise the va_list variale*/

	for (j = 0; j < n; j++)/*Loops through the number of arguments passed*/
		sum += va_arg(ap, int);

	va_end(ap);/*Cleans up the va_list variable*/

	return (sum);/*Returns the calculated sum*/
}
