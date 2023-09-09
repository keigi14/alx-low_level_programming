#include "main.h"

/**
 * binary_to_uint - converts a binary num to unsigned int
 * @b: string containing the binary num
 *num is number
 * Return: the converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (u = 0; b[u]; u++)
	{
		if (b[u] < '0' || b[u] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[u] - '0');
	}

	return (dec_val);
}
