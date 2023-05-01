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
	istint_t *ptr1, *ptr2;
	unsigned int i;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{
		ptr1 = *head;
		*head = (*head)->next;
		free(ptr1);
		return (1);
	}
	ptr2 = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (ptr2->next != NULL)
			return (-1);
	       ptr2 = ptr2->next;
	}
	ptr1 = ptr2->next;
	ptr2->next = ptr1->next;
	free(ptr1);

	return (1);
}
