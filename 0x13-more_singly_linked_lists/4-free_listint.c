#include "lists.h"
/**
 * free_listint - Function to free
 * @head: entry point
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	temp = head;

	while (temp)
	{
		free(temp);
		temp = temp->next;
	}
}

