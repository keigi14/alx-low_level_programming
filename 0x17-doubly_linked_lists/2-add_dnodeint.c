#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start.
 * of a dlistint_t list.
 * @head: head of the lists
 * @n: value of de element
 * Return: the address of the new elemet.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *knew;
	dlistint_t *k;

	knew = malloc(sizeof(dlistint_t));
	if (knew == NULL)
		return (NULL);

	knew->n = n;
	knew->prev = NULL;
	k = *head;

	if (k != NULL)
	{
		while (k->prev != NULL)
			k = k->prev;
	}

	knew->next = k;

	if (k != NULL)
		k->prev = knew;

	*head = knew;

	return (knew);
}
