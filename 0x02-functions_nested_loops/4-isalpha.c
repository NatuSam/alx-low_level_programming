#include "main.h"
#include <ctype.h>
/**
 * _isalpha - return 1 or 0
 * @c: variable to determine if input is lowercase
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
int l = isalpha(c);
if (l > 0)
{
return (1);
}
else
{
return (0);
}
}
