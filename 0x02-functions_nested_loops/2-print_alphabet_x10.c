#include "main.h"
/**
 * print_alphabet_x10 - return a-z x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char n;
int i;
for (i = 0; i < 10; i++)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
}
