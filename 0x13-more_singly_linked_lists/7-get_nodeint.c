#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: index of the node to be returned, starting at 0.
 *
 * Return:pointer points to the nth node of the list,or NULL if doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int u;

	for (u = 0; head != NULL && u < index; u++)
	{
		head = head->next;
	}

	return ((u == index) ? head : NULL);
}
