#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing de djb2 algorithm.
 * @str: de string to hash
 * Return: de calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int g;

	hash = 5381;
	while ((g = *str++))
		hash = ((hash << 5) + hash) + g; /* hash * 33 + g */

	return (hash);
}
