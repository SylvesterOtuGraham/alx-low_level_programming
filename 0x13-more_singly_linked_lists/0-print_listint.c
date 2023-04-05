#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t num1 = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num1++;
	}

	return (num1);
}
