#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (head == NULL)/*Check if the double pointer is NULL*/
		return (NULL);

	/*allocating space for new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;/* Assign the data to the new node*/

	if (idx == 0)/* If the index is 0 (insert at beginning)*/
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;/* Set current node pointer to head*/

	for (i = 0; i < idx - 1 && current_node != NULL; i++)
		current_node = current_node->next;
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/*Set the next pointer of the new node*/
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
