#include "main.h"

/**
 * _strcat - function that concatinates 2 strings
 *
 * @dest: pointer to the destination input
 * @src: pointer to the source input
 *
 * Return: pointer to the resulting sting @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];

	return (dest);
}
