#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 * @h: header node
 *
 * Return: the number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	int element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}

	return (element);
}
