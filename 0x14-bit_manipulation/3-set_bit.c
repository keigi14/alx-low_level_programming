#include "main.h"

/**
 * set_bit - set bit at a given index to 1 or true
 * @n: ptr to the num that should change
 * @index: index of the bit to set to 1
 *
 * Return: 1 on success, - 1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
