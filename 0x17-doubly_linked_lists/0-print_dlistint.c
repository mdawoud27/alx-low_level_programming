#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: head node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;

	if (h)
		while (h)
		{
			cnt++;
			printf("%u\n", h->n);
			h = h->next;
		}
	return (cnt);
}
