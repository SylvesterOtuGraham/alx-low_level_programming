#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num;
	const listint_t *noder;

	num = 0;
	noder = h;

	while (noder != NULL)
	{
		num++;
		noder = noder->next;
	}

	return (num);
}
