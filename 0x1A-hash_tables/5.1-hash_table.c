#include "hash_tables.h"
/**
 * hash_table_print - Prints hash table
 * @ht: hash table input
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	int comma = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] && ht->array[i]->next == NULL)
		{
			if (comma > 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, (char *)ht->array[i]->value);
			comma++;
		}
		else if (ht->array[i] && ht->array[i]->next)
		{
			if (comma > 0)
				printf(", ");
			temp = ht->array[i];
			while (temp->next)
			{
				printf("'%s': '%s'", temp->key, (char *)temp->value);
				temp = temp->next;
			}
			comma++;
		}
	}
	printf("}\n");
}
