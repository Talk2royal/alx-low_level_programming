#include "main.h"

/**
 * _isupper - checks if parameter is an uppuercase character.
 * @: input character.
 * Return: 1 if is an upper character, 0 in other case.
 */
int _isupper(int c)
{
	if (c >= "A" && c <= "Z")
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
