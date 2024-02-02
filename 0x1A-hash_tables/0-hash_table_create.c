#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size of the array
 * Return: If an error occurs - NULL.
 * Otherwise - a ptr to de new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *pt;
	unsigned long int i;

	pt = malloc(sizeof(hash_table_t));
	if (pt == NULL)
		return (NULL);

	pt->size = size;
	pt->array = malloc(sizeof(hash_node_t *) * size);
	if (pt->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		pt->array[i] = NULL;

	return (pt);
}
