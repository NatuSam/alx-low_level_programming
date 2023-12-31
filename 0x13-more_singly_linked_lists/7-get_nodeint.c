#include "lists.h"
#include <stdlib.h>
/**
 *get_nodeint_at_index -  returns the nth node of a listint_t linked list
 *@head: head of node
 *@index: the index of the node, starting at 0
 *Return: nth node
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; head; i++, head = (*head).next)
{
if (i == index)
return (head);
}
return (NULL);
}
