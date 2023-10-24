#include "lists.h"
#include <stdlib.h>
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: head of node
 *@idx: is the index of the list where the new node should be added
 *@n:n of node
 *Return: the address of the new node
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *nxt = *head;
new = malloc(sizeof(listint_t));
new->n = n;
i = 0;
if (!new)
return (NULL);
if (!idx)
{
(*new).next = *head;
*head = new;
return (*head);
}
while (nxt)
{
if (i == (idx - 1))
{
(*new).next = (*nxt).next;
(*nxt).next = new;
return (new);
}
nxt = (*nxt).next;
i++;
}
return (NULL);
}
