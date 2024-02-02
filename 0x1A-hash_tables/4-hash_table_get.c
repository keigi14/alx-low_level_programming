#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 * a key in a hash table.
 * @ht: A pointer to de hash table.
 * @key: de key to get de value of.
 * Return: If de key cannot be matched - NULL.
 * ifelse - the value associated with key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int indecs;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indecs = key_index((const unsigned char *)key, ht->size);
	if (indecs >= ht->size)
		return (NULL);

	node = ht->array[indecs];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
