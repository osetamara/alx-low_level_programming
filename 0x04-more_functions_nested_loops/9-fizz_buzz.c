#include <stdio.h>

/**
 * main - prints  numbers from 1 to 100
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char a[] = "fizz";
	char b[] = "buzz";
	char ab[] = "fizzbuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", ab);
		else if (i % 3 == 0)
			printf("%s", a);
		else if (i % 5 == 0)
			pirntf("%s", b);
		else
			printf("%d", i);
	}
	printf('\n');
}
