#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: The character in ASCII code
 *
 * Return: return 0 on success and 1 on fail
 */

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
