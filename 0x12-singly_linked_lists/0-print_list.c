#include "lists.h"
#include <stdio.h>

/**
 * print_list - function thsat prints all the elements of a list
 * @h: pointer to the list_t
 *
 * Return: number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);

		h = h->next;
		b++;
	}

	return (b);

}
