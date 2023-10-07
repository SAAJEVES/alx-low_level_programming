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
	unsigned long int indexOfKey;
	hash_node_t *node;
	const unsigned char *newKey;

	if (strlen(key) < 1 || ht == NULL || key == NULL)
		return (0);
	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	newKey = (const unsigned char *)key;
	indexOfKey = key_index(newKey, ht->size);
	node->key = (char *)key;
	node->value = (char *)value;
	if (ht->array[indexOfKey] == NULL)
	{
		ht->array[indexOfKey] = node;
		node->next = ht->array[indexOfKey + 1];
	}
	else
	{
		ht->array[0] = node;
		node->next = ht->array[1];
	}
	return (1);
}
