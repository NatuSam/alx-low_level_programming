#include "main.h"
/**
 * _islower - return 1 or 0 
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
int l = islower(c);
if(l > 0)
{
return (1);
}
else 
{
return (0);
}
}
