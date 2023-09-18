#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array
 *@a:a pointer to a string
 *@n:length of array
 */
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
if (i != (n - 1))
printf("%i,", a[i]);
else
printf("%i", a[i]);
i++;
}
printf("\n");
}
