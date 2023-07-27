#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node -  function that adds a new node to the beginning of  a list
 * @head: double pointer to the lisst
 * @str: string to add to the new node
 *
 * Return: address of new element, otherwise NULL
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *k;
	unsigned int len = 0;

	while (str[len])
		len++;

	k = malloc(sizeof(list_t));
	if (!k)
		return (NULL);

	k->str = strdup(str);
	k->len = len;
	k->next = (*head);
	(*head) = k;

	return (*head);

}

