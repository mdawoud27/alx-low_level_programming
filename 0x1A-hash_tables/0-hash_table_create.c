#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array.
 * Return: pointer to the newly created hash table or NULL if failed.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t *));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * (size + 1));

	if (!table->array)
	{
		free(table->array);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
