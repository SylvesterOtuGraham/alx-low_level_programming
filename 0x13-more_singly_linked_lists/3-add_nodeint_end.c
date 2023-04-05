#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer to a pointer to the head of the list
 * @n: Integer value to add to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node, *present;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->next = NULL;

	if (*head == NULL)
	{
		*head = add_node;
		return (add_node);
	}

	present = *head;
	while (present->next != NULL)
		present = present->next;

	present->next = add_node;

	return (add_node);
}
