#include "main.h"
/**
 * more_numbers - return a-z x10
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int n;
int i;
for (i = 0; i < 10; i++)
{
for (n = 0; n <= 14; n++)
{
if (i > 9)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
}
_putchar('\n');
}
}
