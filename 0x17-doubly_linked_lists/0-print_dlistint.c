#include "lists.h"


/**
 * A function that prints all the elements of a dlistint_t list
 * 
 * Function should write the contents of the head file as NULL
 * 
*/

size_t print_dlistint(const dlistint_t *h)
{
    int counter = 0;

    if (h == 0)
    return counter;

    while (h->prev != NULL)
        h = h->prev;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;

        counter ++;
    }
    
    return counter;
}