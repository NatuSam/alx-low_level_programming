#include "main.h"

/**
 * print_rev - updates the value it points to to 98
 *@s:a pointer to a string
 */
void print_rev(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
i--;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
