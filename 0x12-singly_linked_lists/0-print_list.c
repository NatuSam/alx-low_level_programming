#include "lists.h"
#include <stdio.h>
/**
 *print_list : a function that prints all the el
 *ements of a list_t list.
 *@h : head of ll
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
int i;
char *str1;
for (i = 0; h; i++, h = h->next)
{
str1 = h->str;
if (str1)
printf("[%i] %s\n", h->len, str1);
else
printf("[0] %p\n", str1);
}
return (i);
}
