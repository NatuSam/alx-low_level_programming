#include "lists.h"
#include <stdio.h>
/**
 *print_listint -  prints all the elements of a listint_t
 *@h: head
 *Return: the number of nodes
 **/
size_t print_listint(const listint_t *h)
{
int i;
int x;
for (i = 0; h; i++, h = h->next)
{
x = h->n;
printf("%d\n", x);
}
return (i);
}
