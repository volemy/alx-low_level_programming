#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at end of dlistint_t list
 * @head: pointer to pointer of first node in the list
 * @n: value of node to add
 *
 * Return: node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
	{
		current = current->next;

	}
	new_node->prev = current;
	new_node->next = NULL;
	current->next = new_node;
	}
	return (new_node);
}
