#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints all the elements of a list
 *@h : head of ll
 *Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
int i;
for (i = 0; h; i++, h = h->next)
;
return (i);
}
