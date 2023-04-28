#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t list.
 * @h: struct node
 *
 * Return: list length or num of nodes
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
