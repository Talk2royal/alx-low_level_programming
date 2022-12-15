#include "main.h"

/**
 * _isupper - check for uppercase letters
 * @c: parameter to be checked
 * Return: 1 if is an uppercase and 0therwise
 */

int _isupper(int c)
{
	if (c >= "A" && c <= "Z")
		return (1);
	else
		return (0);
}
