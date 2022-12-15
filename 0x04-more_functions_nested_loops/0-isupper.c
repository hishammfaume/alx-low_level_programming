#include "main.h"
/**
 * _isupper - check the code
 * @c: character to be used
 * Return: 1 if uppercase,0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
