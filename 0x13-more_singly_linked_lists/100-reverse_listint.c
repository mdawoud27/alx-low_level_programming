#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t
 * @head: The first node in linked list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *up = NULL, *down;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		down = (*head)->next;
		(*head)->next = up;
		up = *head;
		*head = down;
	}

	*head = up;

	return (*head);
}
