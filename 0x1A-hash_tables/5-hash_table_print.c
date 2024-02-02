#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pter to de hash table to print.
 * Description: Key/value pairs are printed in the order
 * they appear in de array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int p;
	unsigned char _comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (p = 0; p < ht->size; p++)
	{
		if (ht->array[p] != NULL)
		{
			if (_comma_flag == 1)
				printf(", ");

			node = ht->array[p];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			_comma_flag = 1;
		}
	}
	printf("}\n");
}
