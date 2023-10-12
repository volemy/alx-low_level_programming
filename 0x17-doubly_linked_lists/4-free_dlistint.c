#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to the first node in list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
