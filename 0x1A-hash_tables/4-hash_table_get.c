#include "hash_tables.h"

/**
 * hash_table_get -  a function that retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key we want to look for
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index =  key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];

	/* check if the same key has a value*/
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}

	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}

