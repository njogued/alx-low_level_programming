#include <stdlib.h>
#include <stdio.h>
int check_prime(int prime);
/**
 * Program that takes in user input and displays the prime numbers
 */

typedef struct nos List_Nos;
/**
 * struct nos - structure to store prime numbers
 * @numz: prime number stored
 * @node: link to the next node
 */
struct nos{
        int numz;
        List_Nos *node;
};
/**
 * add_node - Function to add node to the start of a list
 * @head: head node
 * @num: number to add to start of list
 * Return: list
 */
List_Nos *add_node(List_Nos **head, int num)
{
	List_Nos *new;
	new = malloc(sizeof(List_Nos));
	if (new == NULL)
	{
		perror("Failed to allocate");
	}
	new->numz = num;
	if ((*head) == NULL)
	{
		new->node = NULL;
		(*head) = new;
	}
	else
	{
		new->node = (*head);
		(*head) = new;
	}
	return (*head);
}
/**
 * print_nos - Function to print the prime numbers
 * @head: head node
 */
void print_nos(List_Nos *head)
{
	int i = 1, n;
	while (head)
	{
		n = check_prime(head->numz);
		if (n == 1)
		{
			printf("Prime number[%d]: %d\n",i, head->numz);
		i++;
		}
		head = head->node;
	}
}
/**
 * check_prime - check if a number is prime
 * @prime: number to check
 * Return: 1 if number is prime, 0 if it is not
 */
int check_prime(int prime)
{
	int iterator, facno = 0, n = 0;
	for (iterator = 1; iterator < prime; iterator++)
	{
		if (prime % iterator == 0)
			facno++;
	}
	if (facno == 1)
	{
		n = 1;
	}
	return (n);
	
}
/**
 * main - Entry point
 * The main function takes input from user
 * Passes the input to add_node which adds it to linked list
 * Calls the print_nos function which prints the prime numbers
 * Return: 0 on success
 */
int main(void)
{
	int factor, nput;
	size_t bufsize = 0;
	List_Nos *head;
	char *buffer = NULL;

	getline(&buffer, &bufsize, stdin);
	nput = atoi(buffer);
	printf("The input is: %d\n", nput);

	head = NULL;

	for (factor = 2; factor < nput; factor++)
	{
		if ((nput % factor) == 0)
		{
			add_node(&head, factor);
		}
	}
	print_nos(head);
	return (0);
}
