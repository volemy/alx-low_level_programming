#include "lists.h"

/**
 * add_nodeint - this functions adds a new node at the beginning of a listint-t
 * list
 * @head: pointer to the end of the list listint_t
 * @n: new node value
 *
 * Return: adress of new node
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
