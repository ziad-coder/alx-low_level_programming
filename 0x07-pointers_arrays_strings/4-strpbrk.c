#include <stdio.h>

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: input string to search
* @accept: set of bytes to search for
* Return: pointer to the byte in s that matches one of the bytes in accept
* or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
char *p;

while (*s != '\0')
{
for (p = accept; *p != '\0'; p++)
{
if (*p == *s)
return (s);
}
s++;
}
return (NULL);
}
