#include "lists.h"

/**
 * dlistint_len - function that returns number of elements in a linked list
 * @h: pointer to the first node in list
 *
 * Return: integer
 */

size_t dlistint_len(const dlistint_t *h)
{
	int cnt = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		cnt++;
}
return (cnt);
}
