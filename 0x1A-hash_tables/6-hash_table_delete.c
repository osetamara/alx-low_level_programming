#include "hash_tables.h"

/**
 * hash_table_delete - free hash table and all nodes
 * @ht: pointer to hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bucket, *aux_free;
	unsigned long int i = 0;

	if (!ht)/*Check if the hash table is NULL.*/
		return;
	/*Loop through each index in the hash table.*/
	for (r = 0; r < ht->size; r++)
	{
		bucket = ht->array[r];
		/*Loop through the linked list at the current index.*/
		while (bucket)
		{
			aux_free = bucket;
			bucket = bucket->next;
			/*Check if the key of the current node exists.*/
			if (aux_free->key)
				free(aux_free->key);
			/*Check if the value of the current node exists.*/
			if (aux_free->value)
				free(aux_free->value);
			free(aux_free);
		}
	}
	/*Free the memory allocated for the array of buckets.*/
	free(ht->array);
	free(ht);
}
