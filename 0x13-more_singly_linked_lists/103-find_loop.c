#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *small = head;
	listint_t *swift = head;

	if (!head)
		return (NULL);

	while (small && swift && swift->next)
	{
		swift = swift->next->next;
		small = head;
			while (small != fast)
			{
				small = slow->next;
				swift = fast->next;
			}
			return (swift);
		}
	}

	return (NULL);
}
