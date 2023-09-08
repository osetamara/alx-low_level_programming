#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key to add the element
 * @value: value to add the element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuecopy, *keycopy;
	hash_node_t  *bucket, *new_node;
	/*Check for invalid input arguments.*/
	if (!ht || !key || !*key || !value)
		return (0);
	/*Create a copy of the 'value' string.*/
	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);
	/*Calculate the index for the key.*/
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			/* Free the old value associated with the existing key.*/
			free(bucket->value);
			bucket->value = valuecopy;
			return (1);
		}
		bucket = bucket->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
	/*Free the 'valuecopy' as it's no longer needed.*/
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);/*Create a copy of the 'key' string.*/
	if (!keycopy)
		return (0);
	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

