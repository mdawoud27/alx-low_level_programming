#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list
 * @head: The first node in linked list
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int temp;
	listint_t *ptr = *head;

	if (*head == NULL)
		return (0);

	temp = ptr->n;
	*head = ptr->next;

	free(ptr);
	return (temp);
}
