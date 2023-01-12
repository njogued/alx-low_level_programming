#include "hash_tables.h"
/**
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;
	int comma = 0;

	if (!ht)
	{
		printf("{}");
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] && ht->array[index]->next == NULL)
		{
			if (comma > 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[index]->key, (char *)\
			ht->array[index]->value);
			comma++;
		}
		else if (ht->array[index] && ht->array[index]->next && comma > 0)
		{
			if (comma > 0)
				printf(", ");
			temp = ht->array[index];
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
