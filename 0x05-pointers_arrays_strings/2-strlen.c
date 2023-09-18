#include "main.h"
#include <string.h>
/**
 * _strlen - updates the value it points to to 98
 *@s:a pointer to a string
 * Return: len of s
 */
int _strlen(char *s)
{
int x;
x = 0;
while (*s != '\0')
{
s++;
x++;
}
return (x);
}
