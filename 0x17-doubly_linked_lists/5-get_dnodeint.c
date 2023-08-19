#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: the first node in the list
 * @index: the index of the node
 * Return: the node of the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr = NULL;

	if (!head)
		return (NULL);

	ptr = head;
	for (i = 0; i < index; i++)
		ptr = ptr->next;

	return (ptr);
}
