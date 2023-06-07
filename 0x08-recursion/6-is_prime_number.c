#include "main.h"
#include  <stdio.h>
#include  <math.h>

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	     return 0;  // Not a prime number
    }

    // Check if the number is divisible by any number from 2 to its square root
    int limit = sqrt(n);
    for (int i = 2; i <= limit; i++) {
        if (n % i == 0) {
            return 0;  // Not a prime number
        }
    }

    return 1;  // Prime number
}
