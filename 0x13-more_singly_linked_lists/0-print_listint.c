#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints alll the elements of a listint_t list.
 * @h: pointer to node
 *
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	int total = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		total++;
	}

	return (total);

}
