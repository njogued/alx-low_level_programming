#include "lists.h"
/**
 * listint_len - Function to print the length of list
 * @h: List
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
