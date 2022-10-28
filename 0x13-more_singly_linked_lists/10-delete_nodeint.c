#include "lists.h"
/**
 * delete_nodeint_at_index - Function to delete node at index
 * @head: the entry point
 * @index: index to delete
 * Return: 1 if succeeded and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *copy, *temp = *head;

	if (!temp)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (counter < (index - 1))
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		counter++;
	}
	copy = temp->next;
	temp->next = copy->next;
	free(copy);
	return (1);
}
