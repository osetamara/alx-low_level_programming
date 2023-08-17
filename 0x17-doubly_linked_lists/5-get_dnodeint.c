#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;/*variable to keep track of list*/
	dlistint_t *tmp;
/*initailize the size counter*/
	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;/*intailize the temp pointer*/
	while (tmp)
	{
	if (index == size)
	return (tmp);/*Return node if index match curent size*/
	size++;
	tmp = tmp->next;/*move to the next node*/
	}
	return (NULL);
}
