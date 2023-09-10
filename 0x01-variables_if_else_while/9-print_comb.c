#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
putchar('0');
for (n = '1'; n <= '9'; n++)
{
putchar(',');
putchar(' ');
putchar(n);
}
return (0);
}
