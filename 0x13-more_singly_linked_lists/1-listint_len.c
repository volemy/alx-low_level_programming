#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * listint_t list
 *
 * @h: pointer to lists
 *
 * Return: number of elements in the list
 *
 */
size_t listint_len(const listint_t *h)
{
	int total = 0;

	while (h != NULL)
	{
		h = h->next;
		total++;

	}

	return (total);

}
