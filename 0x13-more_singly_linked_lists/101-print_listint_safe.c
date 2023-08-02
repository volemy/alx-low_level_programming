#include "lists.h"
#include <stdio.h>

size_t looped_listint(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint - function that prints lists in a loop
 * @head: pointer to linked list
 *
 * Return: checks loops, otherwise 0
 */
size_t looped_listint(const listint_t *head)
{
	size_t y = 1;
	const listint_t *f, *g;

	if (head == NULL || head->next == NULL)
		return (0);

	f = head->next;
	g = (head->next)->next;

	while (g)
	{
		if (f == g)
		{
			f = head;

			while (f != g)

			{
				y++;
				f = f->next;
				g = g->next;
			}

			f = f->next;

			while (f != g)

			{
				y++;

				f = f->next;
			}

			return (y);

		}

		f = f->next;
		g = (g->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to linked list
 *
 * Return: number of nodes in list, otherwise exit with status 98
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t y, index = 0;

	y = looped_listint(head);

	if (y == 0)

	{
		for (; head != NULL; y++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;

		}

	}
	else
	{
		for (index = 0; index < y; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);

		head = head->next;

		}

		printf("-> [%p] %d\n", (void *)head, head->n);

	}

	return (y);

}
