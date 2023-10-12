#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistinct_t list
 * @h: pointer to first node in the linked list
 *
 * Return: size of doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cnt = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		cnt++;
		current = current->next;
	}

	return (cnt);
}
