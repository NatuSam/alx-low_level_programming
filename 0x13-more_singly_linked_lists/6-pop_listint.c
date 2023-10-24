#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 *@head: head of node
 *Return: the head node’s data (n)
 **/
int pop_listint(listint_t **head)
{
  listint_t *delete;
  int x;
  delete = *head;
  x = delete->n;
  *head = (**head).next;
  free(delete);
  return (x);
}
