#include "main.h"

/**
 * puts_half - prints half of a string
 *@str:a pointer to a string
 */
void puts_half(char *str)
{
int i, n;
i = 0;
while (str[i] != '\0')
i++;
if (i % 2 == 0)
n = i / 2;
else
  n = ((i - 1) / 2) + 1;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
