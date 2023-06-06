#include "lists.h"

/**
 * print_listint - returns the number of elements in a linked listint_t list
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h)
{

i++;
h = h->next;
}
return (i);
}
