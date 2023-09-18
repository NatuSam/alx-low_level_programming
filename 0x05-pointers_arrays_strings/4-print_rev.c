#include "main.h"

/**
 * print_rev - updates the value it points to to 98
 *@s:a pointer to a string
 */
void print_rev(char *s)
{
char x[];
int i;
i = 0;
while (*s != '\0')
{
x[i] = *s;
i++;
s++;
}
while (x[i] != '\0')
{
_putchar(x[i]);
i--;
}
}
