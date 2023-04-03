#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints elements within a list.
 * 
 * @h :pointer of 1st node.
 * 
 * Return: number of nodes.
*/
size_t print_listint(const listint_t *h)
{
    size_t xnodes = 0;

    while (h->next != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        xnodes++;
    }
    return (xnodes;)

}