#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: head of node
 *@n: new int
 *Return: the address of the new element, or NULL if it failed
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;
if (!head)
return (NULL);
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
for (last = *head; last->next != NULL; last = last->next)
;
last->next = new;
return (new);
}
