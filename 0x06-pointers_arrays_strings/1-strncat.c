#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatinates 2 strings
 *
 * @dest: pointer to the destination input
 * @src: pointer to the source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return dest;
}
