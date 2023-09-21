#include "main.h"
#include <string.h>
/**
 * _strcat -  return  a pointer to the resulting string dest
 *@dest: first str
 *@src: seconnd str
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *temp = dest;
while (*temp != '\0')
{
temp++;
}
for (; *src != '\0'; src++)
{
*temp = *src;
temp++;
}
*temp = *src;
return (dest);
}
