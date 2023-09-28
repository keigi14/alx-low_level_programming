#include "main.h"

/**
 * flip_bits - counts the nubr of bits to be changed
 * to get from one nubr to another
 * @n: first nubr
 * @m: second nubr
 *
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
