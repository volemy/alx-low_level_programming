#include "lists.h"

/**
 * pop_listint - function deletes head node of listint_t linked list
 * @head: pointer to head element of list
 *
 * Return: head node's data, 0 if list is empty
 *
 */
int pop_listint(listint_t **head)
{
	int b;
	listint_t *next;

	if (*head == NULL)
		return (0);

	b = (*head)->n;
	next = (*head)->next;

	free(*head);
	*head = next;

	return (b);

}
