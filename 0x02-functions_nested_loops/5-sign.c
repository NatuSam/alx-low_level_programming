#include "main.h"
#include <ctype.h>
/**
 * print_sign - return 1 or 0
 * @n: variable to determine if input is lowercase
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
