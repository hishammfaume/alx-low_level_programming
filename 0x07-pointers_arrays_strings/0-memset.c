#include "main.h"
#include <stdio.h>
/**
 * _memset - fills first n bytes to the area pointed
 * to by @s with constant byte @b
 * @n: character used
 * @s: character
 * @b: character
 * Return: a pointter to area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b
	}
	return (s);
}
