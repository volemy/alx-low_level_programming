#include "lists.h"

/**
 * find_listint_loop - function thst finds a loop in a linked list
 * @head: pointer to linked list
 *
 * Return: adress of node where loop starts, otherwise NULL if no loop
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *begin = head;
	listint_t *end = head;

	if (!head)
		return (NULL);

	while (end && begin && begin->next)

	{
		begin = begin->next->next;
		end = end->next;

		if (begin == end)
		{
			end = head;

			while (end != begin)
			{
				end = end->next;
				begin = begin->next;
			}
			return (begin);

		}
	}

	return (NULL);

}
