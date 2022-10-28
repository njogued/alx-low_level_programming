#include <stdlib.h>
#include <string.h>
#include <stdio.h>
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *new;
        listint_t *temp = *head;

        new = malloc(sizeof(listint_t));
        if (!new)
                return (NULL);

        new->n = n;
        new->next = NULL;

        if (*head == NULL)
        {
                *head = new;
                return (new);
        }

        while (temp->next)
                temp = temp->next;

        temp->next = new;

        return (new);
}
void free_listint2(listint_t **head);
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	/**
	 * iterate through list
	 * at head, free pointer (point to head node)
	 * at head node (free data pointed to by headnode->next)
	 */
	while(temp)
	{
		free(temp);
		temp = temp->next;
	}
	*head = NULL;
}
