#include "hash_tables.h"

/**
 * has_used_index - implementing used index
 *
 * @ht: hash table
 *
 * Return: number of used indexes
 */
int hash_used_index(const hash_table_t *ht)
{
	unsigned long int i;
	int num;

	num = 0;
	if (ht == NULL)
		return (num);
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			num++;
	}
	return (num);
}
/**
 * hash_table_print - implementation of printing has table
 *
 * @ht: hash table:
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int used;

	if (ht == NULL)
	{
		return;
	}
	else
	{
		node = (hash_node_t *)malloc(sizeof(hash_node_t));
		if (node == NULL)
			return;
		used = hash_used_index(ht);
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] == NULL)
			{
				continue;
			}
			else
			{
				node = ht->array[i];
				if (used == 1)
				{
					printf("'%s': '%s'", node->key, node->value);
				}
				else
				{
					printf("'%s': '%s', ", node->key, node->value);
				}
				used--;
			}
		}
		printf("}\n");
	}
}
