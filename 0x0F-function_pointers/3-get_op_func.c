#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - Selects the correct function to perform
* the operation asked by the user.
* @s: The operator passed as argument.
*
* Return: A pointer to the function corresponding
* to the operator given as a parameter.
*/
int (*get_op_func(char *s))(int, int)
{
	/* Array of structures to map operators to functions*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},/*Sentinel entry to mark the end of the array*/
	};

	int j = 0;/* Loop counter variable*/


	/*Iterate through ops array matching operator found or end of array reached*/
	while (ops[j].op != NULL && *(ops[j].op) != *s)
		j++;


	/* Return a pointer to function corresponding to operator found*/
	return (ops[j].f);
}
