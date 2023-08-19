#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: head of the list
 * @n: node date
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new;
	new->prev = ptr;

	return (*head);
}
