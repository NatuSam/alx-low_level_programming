#include "lists.h"
#include <stdlib.h>
/**
 *delete_nodeint_at_index - deletes the node at index
 *@head: head of node
 *@index: is the index of the node that should be deleted
 *Return: 1 if it succeeded, -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *delete;
unsigned int i;
if (!*head)
return (-1);
for (i = 0, tmp = *head; tmp && index; i++, tmp = (*tmp).next)
{
if (i == (index - 1))
{
delete = (*tmp).next;
(*tmp).next = (*delete).next;
free(delete);
return (1);
}
}
if (!index && (**head).next)
{
delete = *head;
*head = (*delete).next;
free(delete);
return (1);
}
else if (!index && *head)
{
*head = NULL;
free(*head);
return (1);
}
return (-1);
}
