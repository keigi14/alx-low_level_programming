#include "lists.h"

/**
 * add_dnodeint_end - adds the new node at the end
 * of a dlistint_t lists.
 * @head: head of de list
 * @n: value of the element
 * Return: the address of de new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *k;
	dlistint_t *knew;

	knew = malloc(sizeof(dlistint_t));
	if (knew == NULL)
		return (NULL);

	knew->n = n;
	knew->next = NULL;

	k = *head;

	if (k != NULL)
	{
		while (k->next != NULL)
			k = k->next;
		k->next = knew;
	}
	else
	{
		*head = knew;
	}

	knew->prev = k;

	return (knew);
}
