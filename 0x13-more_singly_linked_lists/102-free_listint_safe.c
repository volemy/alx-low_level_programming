#include "lists.h"

/**
 * free_listint_safe - function that frees list with a loop
 *
 * @h: pointer to linke list
 *
 * Return: size of list that was free'd
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	int x;
	listint_t *list;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			list = (*h)->next;
			free(*h);
			*h = list;
			nodes++;

		}

		else
		{
			free(*h);
			*h = NULL;
			nodes++;
			break;

		}

	}
	*h = NULL;

	return (nodes);
}
