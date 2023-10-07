#include "hash_tables.h"
/**
 * hash_table_set - sets up the hash table
 *
 * @ht: the table
 *
 * @key: the key
 *
 * @value: the value
 *
 * Return: Success 1 while Failure 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indexOfKey, newIndexOfKey;
	hash_node_t *node;

	if (strlen(key) < 1 || ht == NULL || key == NULL)
		return (0);
	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	indexOfKey = key_index((const unsigned char *)key, ht->size);
	node->key = strdup(key);
	node->value = strdup(value);
	if (ht->array[indexOfKey] == NULL)
	{
		ht->array[indexOfKey] = node;
		node->next = ht->array[indexOfKey + 1];
	}
	else
	{
		newIndexOfKey = 0;
		while (newIndexOfKey < indexOfKey)
		{
			if (ht->array[newIndexOfKey] == NULL)
			{
				ht->array[newIndexOfKey] = node;
				node->next = ht->array[newIndexOfKey + 1];
				break;
			}
			newIndexOfKey++;
		}
	}
	return (1);
}
