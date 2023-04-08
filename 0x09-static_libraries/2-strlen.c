#include "main.h"

/**
 * _strlen - return the lehght of the function
 *
 * @s: string parameter input
 *
 * Return: lengh of the string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
