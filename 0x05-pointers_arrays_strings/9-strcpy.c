#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 *@dest:a pointer to a string
 *@src: a pointer
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len, count;
len = 0;
while (src[len] != '\0')
len++;
for (count = 0; count <= len; count++)
dest[count] = src[count];
return (dest);
}
