#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - responsible for deleting the head node of a linked list.
 * @head: Pointer to the pointer to the head of the list
 *
 * Return: 0 if list is empty, return head node data or 0
 */
int pop_listint(listint_t **head)
{
	int h;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	h = temp->h;
	free(temp);

	return (h);
}
