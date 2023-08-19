#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in
 * a linked dlistint_t list.
 * @h: head of linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	if (h)
		while (h)
		{
			cnt++;
			h = h->next;
		}
	return (cnt);
}
