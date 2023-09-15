#include "main.h"
#include <ctype.h>

/**
 * _isdigit - return 1 if c is uppercase
 *@c: is parameter
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
if (isdigit(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
