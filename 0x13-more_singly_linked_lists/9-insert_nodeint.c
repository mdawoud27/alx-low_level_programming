#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: The fiest node in linked list
 * @idx: the index of the list where the new node should be added.
 * @n: An integer data
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *ptr = *head;
	unsigned int i;

	if (head == NULL)
	{
		free(head);
		return (NULL);
	}
	ptr = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = ptr;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; i < idx - 1; i++)
		ptr = ptr->next;
	if (ptr == NULL)
		return (NULL);

	newNode->next = ptr->next;
	ptr->next = newNode;

	return (newNode);
}
