#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (success)
 */
int check_num(char *str)
{
/*declaring varaible*/
unsigned int count;

count = 0;
while (count < strlen(str))/*count string*/

{
if (!isdigit(str[count]))/* check if str there are digit*/
{
return (0);
}
count++;
}
return (1);
}

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: Argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{

/*declaring variable*/
int count;
int str_to_int;
int sum = 0;

count = 1;
while (count < arguc)/*goes through the whole array*/
{
if (count_num(argv[count]))

{
str_to_int = atoi(argv[count]);/*ATOI -> convert string to int*/
sum += str_to_int;
}

/*condition if one of the number contain symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}

count++;
}

printf("%d\n", sum);/*print sum*/

return (0);
}
