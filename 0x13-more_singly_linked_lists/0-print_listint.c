#include "lists.h"

/**
 * print_listint - to print all the elements of the linked list
 * @h: to print linked list of type listint_t
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
