#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - return 1 or 0
 * @n: variable to determine if input is lowercase
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
n %= 10;
if (n < 0)
n *= -1;
n += 48;
_putchar(n);
return (n - '0');
}
