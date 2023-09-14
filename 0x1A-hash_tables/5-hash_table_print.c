#include "hash_tables.h"

/**
 * hash_table_print - print the key/value
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count;
	hash_node_t *node;

	count = 0;
	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (count > 0)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			count++;
			node = node->next;
		}
	}
	printf("}\n");
}		
