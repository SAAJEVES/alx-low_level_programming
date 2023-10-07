#include "hash_tables.h"
/**
 * hash_table_get - get value implementation
 *
 * @ht: table
 *
 * @key: key
 *
 * Return: value ie a char * or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indexOfKey;

	if (strlen(key) < 1 || ht == NULL || key == NULL)
		return (NULL);

	indexOfKey = key_index((const unsigned char *)key, ht->size);

	if (ht->array[indexOfKey] == NULL)
		return (NULL);

	if (indexOfKey > ht->size)
		return (NULL);
	return (ht->array[indexOfKey]->value);
}
