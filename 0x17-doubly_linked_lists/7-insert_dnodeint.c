#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts new node at given position
 * @h: pointer to pointer of first node in list
 * @idx: index of list where new node is to be added
 * @n: value of node to be in serted
 *
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; idx != 1; idx--)
	{
		current = current->next;
		if (current == NULL)
		{
			return (NULL);
		}
	}
	if (current->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
