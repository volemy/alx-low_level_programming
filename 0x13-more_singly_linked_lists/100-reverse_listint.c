#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 *
 * @head: pointer to linked list
 *
 * Return: pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *older = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = older;
		older = *head;
		*head = new;

	}
	*head = older;
	return (*head);

}

