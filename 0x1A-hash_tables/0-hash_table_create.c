#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: If an error occurs - NULL..
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh_t;
	unsigned long int i;

	hsh_t = malloc(sizeof(hash_table_t));
	if (hsh_t == NULL)
		return (NULL);

	hsh_t->size = size;
	hsh_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hsh_t->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hsh_t->array[i] = NULL;
	return (hsh_t);
}
