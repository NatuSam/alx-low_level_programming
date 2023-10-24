#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 -  frees a listint_t list
 *@head: head of node
 **/
void free_listint2(listint_t **head)
{
listint_t *hold;
while (head && *head)
{
hold = *head;
*head = (**head).next
free(hold);
}
}
