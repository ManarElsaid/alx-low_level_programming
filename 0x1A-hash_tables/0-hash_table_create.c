#include "hash_tables.h"
/**
 * hash_table_create - a function creates a hash table
 * @size: the size of the hash table
 * Return: the created table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * table->size);

	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
