#include "lists.h"
#include <stdlib.h>
/**
 *sum_listint -  returns the sum of all the data (n) of a listint_t linked list
 *@head: head of node
 *Return: sum
 **/
int sum_listint(listint_t *head)
{
int x, i;
x = 0;
if (!head)
return (0);
for (i = 0; head; i++, head = (*head).next)
{
x = x + head->n;
}
return (x);
}
