#include "main.h"

/**
 * _isalpha - Checks character is alphabetic
 * @c: The character to be checked
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
