#include "hash_table.h"
/**
 * key_index - Function to check index
 * @key: key
 * @size: size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index =  hash_djb2(key);
	return (index % size);
}
