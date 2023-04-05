#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all members of a listint_t list
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t num_members = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_members++;
	}

	return (num_members);
}
