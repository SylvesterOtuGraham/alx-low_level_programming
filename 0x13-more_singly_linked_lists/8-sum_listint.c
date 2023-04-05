#include "lists.h"

/**
 * sum_listint - Calculates sum of all data of a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all data (n) in list, or 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
