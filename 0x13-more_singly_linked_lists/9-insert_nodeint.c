#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position
 * @head: pointer to the head element
 * @n: value of the new node
 * @idx: specified index
 *
 * Return: address of new_node , NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *tmp, *new = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		tmp = *head;
		for (j = 0; j < idx - 1 && tmp != NULL; j++)
			tmp = tmp->next;

		if (tmp == NULL)
			return (NULL);
	}
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);

}
