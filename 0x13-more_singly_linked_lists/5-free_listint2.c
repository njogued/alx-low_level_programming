#include "lists.h"
/**
 * free_listint2 - Function to free
 * @head: entry point
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL;
}
