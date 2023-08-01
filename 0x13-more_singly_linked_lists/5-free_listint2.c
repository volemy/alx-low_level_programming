#include "lists.h"

/**
 * free_listint2 - function that frees listint_t list
 * @head: pointer to the head of the list listint_t
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;

		free(*head);
		*head = next;

	}

}
