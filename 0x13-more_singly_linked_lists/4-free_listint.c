#include "lists.h"
#include <stdlib.h>
/**
 *free_listint -  frees a listint_t list
 *@head: head of node
 **/
void free_listint(listint_t *head)
{
listint_t *hold;
while (head != NULL)
{
hold = head;
head = head->next;
free(hold);
}
}
