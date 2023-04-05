#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the pointer to the head of the list
 *
 * Return: The head node data, or 0 if list is empty
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
