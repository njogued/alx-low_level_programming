#include "lists.h"
/**
 * free_listint2 - Function to free
 * @head: entry point
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}

