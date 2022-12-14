#include "lists.h"
/**
 * pop_listint - function to delete the node
 * @head: entry point
 * Return: Data n
 */
int pop_listint(listint_t **head)
{
	int temp;
	listint_t *str;

	str = *head;

	if (str == NULL)
		return (0);
	*head = (*head)->next;
	temp = str->n;
	free(str);
	return (temp);
}
