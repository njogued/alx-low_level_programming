#include "lists.h"
/**
 * insert_nodeint_at_index - Function to insert node at index
 * @head: entry point
 * @idx: Index
 * @n: Int n
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int iterator = 0;
	listint_t *new, *temp;

	temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (temp && iterator < (idx - 1))
	{
		temp = temp->next;
		iterator++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
