#include "lists.h"
/**
 *
 *
 */

void free_listint(listint_t *head)
{
        /*listint_t *temp = head;*/
        /**
         * iterate through list
         * at head, free pointer (point to head node)
         * at head node (free data pointed to by headnode->next)
         */
        while(head)
        {
                free(head);
                head = head->next;
        }
}

