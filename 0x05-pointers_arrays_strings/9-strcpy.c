#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int s = 0;
	int o = 0;

	while (*(src + s) != '\0')
	{
		s++;
	}
	for ( ; o < s ; o++)
	{
		dest[o] = src[o];
	}
	dest[s] = '\0';
	return (dest);
}
