#include "main.h"

/**
 * _isupper - check if input is digit
 *
 * @c: input
 *
 * Return: 1 if it is uppercase, 0 if not*
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
