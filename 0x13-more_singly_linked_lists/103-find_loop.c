#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hurt = head;
	listint_t *swift = head;

	if (!head)
		return (NULL);

	while (hurt && swift && swift->next)
	{
		swift = swift->next->next;
		hurt = head;
			while (hurt != fast)
			{
				hurt = hurt->next;
				swift = swift->next;
			}
			return (swift);
		}
	}

	return (NULL);
}
