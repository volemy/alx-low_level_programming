#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end -  function that adds a new node at the end of list
 * @head: double pointer to list_t
 * @str: dtring to add
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *k;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	k = malloc(sizeof(list_t));

	if (!k)
		return (NULL);

	k->str = strdup(str);
	k->len = len;
	k->next = NULL;

	if (*head == NULL)
	{
		*head = k;
		return (k);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = k;

	return (k);

}
