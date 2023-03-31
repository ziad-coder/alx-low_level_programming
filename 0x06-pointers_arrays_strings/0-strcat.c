#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
* Return: void
*/

char *_strcat(char *dest, char *src)

{
int x;
int s;

x = 0;
while (dest[x] != '\0')

{
x++;
}
s = 0;
while (src[s] != '\0')
{
dest[x] = src[s];
x++;
s++;
}
dest[x] = '\0';
return (dest);
}
