#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: the first node in the list
 * @index: the index of the node
 * Return: the node of the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;
	dlistint_t *ptr;

	node = 0;
	ptr = head;
	if (head == NULL)
		return (NULL);
	while (ptr != NULL)
	{
		if (index == node)
			return (ptr);
		ptr = ptr->next;
		node++;
	}
	return (NULL);
}
