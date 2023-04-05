#include "lists.h"

/**
 * listint_len - hands back the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *node;

	num = 0;
	node = h;

	while (node != NULL)
	{
		num++;
		node = node->next;
	}

	return (num);
}
