#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value
 * pair should be stored in array of a hash table.
 * @key: de key to get de index of.
 * @size: de size of de array of de hash table.
 * Return: de index of de key.
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
