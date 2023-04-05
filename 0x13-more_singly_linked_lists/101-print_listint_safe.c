#include "lists.h"
#include <stddef.h> /* for NULL definition */
#include <stdlib.h> /* for exit definition */
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num;

	num = 0;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		num++;
		if (head->next >= head)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			printf("-> Loop detected, exit the program\n");
			exit(98);
		}
		head = head->next;
	}

	return (num);
}
