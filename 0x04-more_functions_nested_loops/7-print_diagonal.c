#include "main.h"
/**
 *print_diagonal - display spaces and enter
 *@n: is the num of space
 */
void print_diagonal(int n)
{
int x;
int i;
if (n <= 0)
_putchar('\n');
else
{
for (x = 1; x <= n; x++)
{
for (i = 1; i <= x; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
