#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: head node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = NULL;
	size_t cnt = 0;

	if (h)
	{
		ptr = h;
		while (ptr)
		{
			cnt++;
			printf("%u\n", ptr->n);
			ptr = ptr->next;
		}
	}
	return (cnt);
}
