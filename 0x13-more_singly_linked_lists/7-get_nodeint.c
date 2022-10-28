#include "lists.h"
/**
 * get_nodeint_at_index - Function to get nth node
 * @head: entry point
 * @index: nth index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		count++;
		if (count == index)
			break;
	}
	if (head && (count < index))
	{
		return (NULL);
	}
	return (temp);
}
