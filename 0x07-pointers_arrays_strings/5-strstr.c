#include <stdio.h>

/**
* _strstr - locates a substring
* @haystack: string to search in
* @needle: substring to search for
* Return: pointer to the beginning of the located
* substring or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*n == *haystack && *n != '\0' && *haystack != '\0')
{
n++;
haystack++;
}

if (*n == '\0')
return (h);

haystack = h + 1;
}

return (NULL);
}
