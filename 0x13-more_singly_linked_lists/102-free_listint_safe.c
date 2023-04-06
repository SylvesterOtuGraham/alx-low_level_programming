#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list and sets the head to NULL.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t num = 0; 
    listint_t *temp;   

    while (*h != NULL)
    {
       
        if (*h <= (*h)->next)
        {
            
            (*h)->next = NULL;

          
            free(*h);
            *h = NULL;
            return num;
        }

        
        temp = (*h)->next;
        free(*h);
        *h = temp;
        num++;
    }

  
    *h = NULL;

    
    return num;
}
