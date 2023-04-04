#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: string to search for character
* @c: character to locate in string
* Return: a pointer to the first occurrence of the character c in the string s,
* or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
