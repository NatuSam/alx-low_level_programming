#include "main.h"
/**
 * print_most_numbers - return 1-9
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
if (n == '2' || n == '4')
continue;
_putchar(n);
}
_putchar('\n');
}
