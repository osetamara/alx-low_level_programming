#include "hash_tables.h"
/**
 * hash_table_get - function to retrieve value associeted with key
 * @ht: pointer to hash table
 * @key: key to retrive value
 *
 * Return: value or NULL if key does not exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/*Initialize an index variable.*/
	unsigned long int index = 0;
	hash_node_t  *bucket;

	if (!ht || !key || !*key)
		return (NULL);

	/*Calculate the index for the key.*/
	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	/*Loop through the linked list at the calculated index.*/
	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		/*Move to the next node in the linked list.*/
		bucket = bucket->next;
	}
	return (NULL);
}
