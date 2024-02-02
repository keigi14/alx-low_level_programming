#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: A pter to a hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int p;

	for (p = 0; p < ht->size; p++)
	{
		if (ht->array[p] != NULL)
		{
			node = ht->array[p];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
