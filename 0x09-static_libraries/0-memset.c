#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s:char
 * @b:char
 * @n:unsigned int
 * Return:char
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
