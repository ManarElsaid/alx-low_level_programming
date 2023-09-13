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
	hash_node_t *node, *current_node;
	unsigned long int index;

	if (ht == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index =  key_index((unsigned char *)key, ht->size);
	current_node = ht->array[index];

	/* check if the same key has a value*/
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->key);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);


	node->key = strdup(key);
	node->value = strdup(value);
	node->next = current_node;

	return (1);
}
