#include "lists.h"
/**
 * free_listint - Function to free
 * @head: entry point
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}

