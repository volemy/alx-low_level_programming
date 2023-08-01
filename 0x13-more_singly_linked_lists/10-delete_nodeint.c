#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node at index of
 * a listint_t linked list
 * @index: node to be deleted
 * @head: pointer to linked list
 * Description: index starts at 0
 *
 * Return: 1 (success(, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del = *head;
	listint_t *node = NULL;
	unsigned int x = 0;

	if (*head == 0)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);

	}

	while (x < index - 1)
	{
		if (!del || !(del->next))
			return (-1);
		del = del->next;
		x++;
	}

	node = del->next;
	del->next = node->next;
	free(node);

	return (1);

}
