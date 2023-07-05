#include "lists.h"

/**
 * listint_len - return number of element in the linked list
 * @h: linked list of type listint to traverse
 *
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t fun = 0;/*declaring variable*/

	while (h != NULL)
	{
		fun++;/*increment the node coun*/
		h = h->next;/*move to the next node*/
	}
	return (fun);
}
