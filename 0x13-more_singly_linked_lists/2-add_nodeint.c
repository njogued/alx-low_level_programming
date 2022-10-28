#include "lists.h"
/**
 * add_nodeint - Function to add node at beginning
 * @head: Entry point
 * @n: data to add
 * Return: address of new element and null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
