#include "lists.h"

/**
 * get_dnodeint_at_index - funtion that returns the nth node of dlistint_t
 * linked list
 * @head: pointer to first node of list
 * @index: index of node to return
 *
 * Return: desired node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int cnt = 0;

	while (current != NULL)
	{
		if (cnt != index)
		{
			current = current->next;
			cnt++;
		}
		else
		{
			return (current);
		}
	}
	return (NULL);
}
