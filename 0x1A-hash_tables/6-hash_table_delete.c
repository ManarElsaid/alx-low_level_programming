#include "hash_tables.h"

/**
 * hash_table_delete - delete the hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node;
			free(node->key);
			free(node->value);
			node = node->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
