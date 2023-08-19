#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a node at idx
 * @h: head of the list
 * @idx: the index of the list where the new node should be added.
 * @n: node's data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		if (*h)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}

	ptr = *h;
	for (i = 0; i < idx - 1 && ptr; i++)
		ptr = ptr->next;

	if (!ptr)
	{
		free(new);
		return (NULL);
	}

	new->next = ptr->next;
	new->prev = ptr;

	if (ptr->next)
		ptr->next->prev = new;

	ptr->next = new;

	return (*h);
}
