#include "main.h"

/**
 * rev_string - updates the value it points to to 98
 *@s:a pointer to a string
 */
void rev_string(char *s)
{
int len, count, end;
char beg;
len = 0;
while (s[len] != '\0')
len++;
len--;
for (count = 0; count <= len / 2; count++)
{
beg = s[count];
end = s[len - count];
s[count] = end;
s[len - count] = beg;
}
}
