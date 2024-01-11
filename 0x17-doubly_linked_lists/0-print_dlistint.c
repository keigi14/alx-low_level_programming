#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 * @h: head of the lists.
 * Return: the nubr of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int countme;

	countme = 0;

	if (h == NULL)
		return (countme);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		countme++;
		h = h->next;
	}

	return (countme);
}
