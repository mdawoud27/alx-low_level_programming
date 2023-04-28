#include "lists.h"

/**
 * add_node - function that adds a new node at
 * the beginning of a list_t list.
 * @head: the first node in linked list
 * @str: string must be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)

		return (free(newNode), NULL);

	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
