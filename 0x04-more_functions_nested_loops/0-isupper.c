#include "main.h"
#include <ctype>

/**
 * _issupper - return 1 if c is uppercase
 *@c: is parameter
 * Return: Always 0 (Success)
 */
int _issupper(int c)
{
if (isupper(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
