#include "hash_tables_h"
/**
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int iterator = 0;

	if (!ht)
	{
		printf("{}");
	}
	printf("{");
	for (iterator = 0; iterator < ht->size; iterator++)
	{

