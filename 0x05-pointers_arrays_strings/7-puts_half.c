#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int l, n, longi;

	longi = 0;

	for (l = 0; str[l] != '\0'; l++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (l = n; str[l] != '\0'; l++)
		_putchar(str[l]);
	_putchar('\n');
}
