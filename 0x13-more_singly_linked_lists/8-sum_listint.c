#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data (n)
 * of a listint_t linke list
 *
 * @head: pointer to the head value of the list
 *
 * Return: sum of all data (n), 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_listint(head->next));

}
