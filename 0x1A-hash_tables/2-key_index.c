#include "hash_tables.h"

/**
 * key_index - implementation of the index of key
 *
 * @key: the key
 *
 * @size: the size of table
 *
 * Return: returns an index with the range of size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_hash;
	unsigned long int index;

	key_hash = hash_djb2(key);
	index = key_hash % size;

	return (index);
}
