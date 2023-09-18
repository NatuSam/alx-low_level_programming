#include "main.h"
/**
 * swap_int - updates the value it points to to 98
 *@a:a pointer to an int
 *@b:a pointer to an int
 * Return : none
 */
void swap_int(int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
}
