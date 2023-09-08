#include "hash_tables.h"

/**
 * hash_table_print - function to print the key:value from ht
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int r = 0;/*Initialize an index variable.*/
	hash_node_t  *bucket;
	int not_fin = 0;
	/*Check if the hash table is NULL.*/
	if (!ht)
		return;
	/*Start printing the opening curly brace for the dictionary.*/
	printf("{");
	/*Loop through each index in the hash table.*/
	for (r = 0; r < ht->size; r++)
	{
		bucket = ht->array[r];
		/*Loop through the linked list at the current index.*/
		while (bucket)
		{
			/*Check if this is not first key-value pair being printed.*/
			if (not_fin)
				printf(", ");
			/*Print the key and value in the format: 'key': 'value'*/
			printf("'%s': '%s'", bucket->key, bucket->value);
			not_fin = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
