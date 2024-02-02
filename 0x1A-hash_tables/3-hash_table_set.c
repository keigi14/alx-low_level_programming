#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pter to de hash table.
 * @key: The key to add - can't be an empty string.
 * @value: The value associated with key.
 * Return: Upon failure - 0.
 * ifelse - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *brand;
	char *value_copy;
	unsigned long int index;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	brand = malloc(sizeof(hash_node_t));
	if (brand == NULL)
	{
		free(value_copy);
		return (0);
	}
	brand->key = strdup(key);
	if (brand->key == NULL)
	{
		free(brand);
		return (0);
	}
	brand->value = value_copy;
	brand->next = ht->array[index];
	ht->array[index] = brand;

	return (1);
}
