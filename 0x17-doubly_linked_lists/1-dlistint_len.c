#include "lists.h"

/**
 * dlistint_len - returns the nubr of alements in
 * a double linked lists
 * @h: head of the list.
 * Return: the nubr of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int countme;

	countme = 0;

	if (h == NULL)
		return (countme);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		countme++;
		h = h->next;
	}

	return (countme);
}
