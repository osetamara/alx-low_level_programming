#include <stdio.h>
#include <math.h>

/**
 * main - print the prime factors
 * Return: 0 always
 */

int main(void)
{
	long long int n = 612852475143;
	long long int largest_factor = 1;

	while (n % 2 == 0)
	{
		largest_factor = 2;
		n /= 2;
	}
	for (long long int i = 3; i <= sqrt(n); i + = 2)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		largest_factor = n;
	}
	printf("%11d\n", largest_factor);
	return (0);
}
