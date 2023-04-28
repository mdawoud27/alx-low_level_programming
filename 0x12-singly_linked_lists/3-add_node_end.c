#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: the first node in linked list
 * @str: string must be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t)), *ptr = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
		return (free(newNode), NULL);

	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = newNode;

	return (newNode);
}
