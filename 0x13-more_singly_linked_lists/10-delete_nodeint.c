#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list.
 * @head: the first nods in linked list
 * @index: An index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *ptr = *head;
	unsigned int i;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
	ptr = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (ptr->next != NULL)
			return (-1);
		ptr = ptr->next;
	}
	node = ptr->next;
	ptr->next = node->next;
	free(node);

	return (-1);
}
