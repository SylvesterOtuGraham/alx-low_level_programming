#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node at index of a linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if the deletion succeeded, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int u;

	if (*head == NULL)	/* if the list is empty */
		return (-1);

	if (index == 0)	/* if we want to delete the first node */
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	previous = *head;
	current = previous->next;
	for (u = 1; current != NULL && u < index; u++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)	/* if the index is out of bounds */
		return (-1);

	previous->next = current->next;	/* unlink the node */
	free(current);	/* free the memory */

	return (1);
}
