#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack:string
 * @needle:string
 * Return:string
*/

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);

	while (*hystack)
	{
		x = 0;

		if (haystak[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystak);

				x++;

			} while (haystak[x] == needle[x]);
		}

		haystak++;
	}

	return ('\0');
}
