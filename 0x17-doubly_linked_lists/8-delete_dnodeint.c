#include "lists.h"

/**
 * delete_dnodeint_at_index -  function that deletes the node at index of
 * linked list
 * @head: poiter to pointer of first node of  linked list
 * @index: the index  node  to be deleted
 *
 * Return: 1 (success), otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int count;

if (head == NULL || *head == NULL)
{
return (-1);
}

current = *head;

if (index == 0)
{
*head = current->next;
if (current->next != NULL)
{
current->next->prev = NULL;
}
free(current);
return (1);
}

for (count = 0; count < index; count++)
{
if (current->next == NULL)
{
return (-1);
}
current = current->next;
}

current->prev->next = current->next;

if (current->next != NULL)
{
current->next->prev = current->prev;
}

free(current);

return (1);
}
