#include <stdoi.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: lenght of argv
 * @argv: number of argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
/*Declaring variable*/
int position, total, change, aux;
int coin[] = {25, 10, 5, 2, 1};/*Array int*/

position = total = change = aux = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

total = atoi(argv[1]);

if (total <= 0)
{
printf("0\n");
return (0);
}

/*Declaring while*/

while (coins[position] != '\0')

{
if (total >= coins[position])
{
aux = (total / coins[position]);
change += aux;
total -= coins[position] * aux;
}

position++;

}

printf("%d\n", change);
return (0);
}
