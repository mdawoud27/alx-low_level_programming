#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: the first node in linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
