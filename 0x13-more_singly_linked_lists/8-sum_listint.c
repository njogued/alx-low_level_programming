#include "lists.h"
/**
 * sum_listint - Sums the data in nodes
 * @head: Entry point
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
