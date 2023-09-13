#include "main.h"
/**
 * times_table - return nothing
 *
 * Return: nothing
 */
void times_table(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; i < 10; j++)
{
k = i * j;
_putchar(k);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
