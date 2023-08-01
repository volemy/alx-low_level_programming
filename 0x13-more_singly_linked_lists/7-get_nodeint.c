#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of a
 * listint_t linked list
 * @head: pointer to head element of list
 * @index: index of node
 *
 * Return: nth node of listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);


	for (x = 0; x < index; x++)

	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);

}
