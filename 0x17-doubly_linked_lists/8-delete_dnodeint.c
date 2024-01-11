#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes de node at index of a
 * dlistint_t linked lists.
 * @head: head of de lists.
 * @index: index of de new node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int v;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;

	v = 0;

	while (h1 != NULL)
	{
		if (v == index)
		{
			if (v == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		v++;
	}

	return (-1);
}
