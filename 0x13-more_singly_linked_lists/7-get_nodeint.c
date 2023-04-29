#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: The first node in linked list
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = head;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
		ptr = ptr->next;

	return (ptr);
}
