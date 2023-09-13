#include <main.h>
/**
 * print_alphabet - return a-z
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
return (0);
}
