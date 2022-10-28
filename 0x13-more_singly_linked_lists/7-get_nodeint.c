#include "lists.h"
/**
 * get_nodeint_at_index - Function to get nth node
 * @head: entry point
 * @index: nth index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        size_t n;

        for (n = 0; (n < index) && (head->next); n++)
        head = head->next;

        if (n < index)
        return (NULL);
}
