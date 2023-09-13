#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - return 1 or 0
 * @n: variable to determine if input is lowercase
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int x, y;
x = abs(n);
y = x % 10;
return (y);
}
