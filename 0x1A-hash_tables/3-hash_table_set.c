#include "hash_tables.h"
/**
 * hash_table_set - Function to add element at certain index
 * @ht: hash table
 * @key: key
 * @value: value corresponding to key
 *
 * Return: 1 if success, 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *temp = NULL;
	unsigned long int index = 0;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL || !key || !value || !ht)
	{
		return (0);
	}
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
	}
	else
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(key, temp->key) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		item->next = ht->array[index];
		ht->array[index] = item;
	}
	return (1);
}
