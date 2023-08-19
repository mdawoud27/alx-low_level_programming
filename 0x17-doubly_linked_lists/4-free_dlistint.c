#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
