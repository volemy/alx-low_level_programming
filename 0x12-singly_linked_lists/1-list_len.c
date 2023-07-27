#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that adds a new node at beginning of list
 * @h: pointer to list_t
 *
 * Return: number of elements
 *
 */

size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}

	return (b);

}
