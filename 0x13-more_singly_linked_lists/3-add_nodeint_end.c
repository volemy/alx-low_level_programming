#include "lists.h"

/**
 * add_nodeint_end - this function adds new node at end of listint_t list
 * @head: pointer to head of list listint_t
 * @n: value of new node
 *
 * Return: new node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *present;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	present = *head;

	while (present->next != NULL)
		present = present->next;

	present->next = new_node;

	return (new_node);
}
