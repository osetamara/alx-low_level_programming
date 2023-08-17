#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *num;
	dlistint_t *head;
	unsigned int m;

	num = NULL;
	if (idx == 0)/*insert at the beginning*/
		num = add_dnodeint(h, n);
	else
	{
		head = *h;
		m = 1;
		if (head != NULL)/*Traverse to beginning ot list*/
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (m == idx)
			{
				if (head->next == NULL)
					num = add_dnodeint_end(h, n);
				else
				{
					num = malloc(sizeof(dlistint_t));
					if (num != NULL)
					{
						num->n = n;
						num->next = head->next;
						num->prev = head;
						head->next->prev = num;
						head->next = num;
					}
				}
				break;
			}
			head = head->next;
			m++;
		}
	}

	return (num);
}
