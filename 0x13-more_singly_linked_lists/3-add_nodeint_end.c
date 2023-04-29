#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: the first node in linked list
 * @n: an integer
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t)), *ptr = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head == NULL)
		*head = newNode;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = newNode;
		newNode->next = NULL;
	}

	return (newNode);
}
