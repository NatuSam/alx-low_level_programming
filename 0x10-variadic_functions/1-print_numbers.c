#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed \n
 * @separator: the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, unsigned int));
if (separator != NULL && (i + 1) != n)
printf("%s", separator);
}
printf("\n");
}
