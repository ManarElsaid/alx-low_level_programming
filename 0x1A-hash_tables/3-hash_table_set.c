#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: pointer to hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated to the key
 *
 * Return: 1 if succeded 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	unsigned long int index;
	hash_node_t *current_node;

	index = hash_djb2((unsigned char *)key);
	current_node = ht->array[index];

	if (node == NULL)
		return (0);

	if (strlen(key) == 0)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->value = NULL;


	if (current_node == NULL)
	{
		current_node = node;
	}

	else
	{
		node->next = current_node;
		current_node = node;
	}

	return (1);
}
