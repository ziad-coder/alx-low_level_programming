#include "main.h"

/**
* _strncat - concatenate two strings
* using at most n bytes from src
* @dest: input value
* @src: input value
* @n: input value
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
	int x;
	int s;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	s = 0;

	while (s < n && src[s] != '\0')
	{
		dest[x] = src[s];

		x++;

		s++;

	}

	dest[x] = '\0';

	return (dest);

}
