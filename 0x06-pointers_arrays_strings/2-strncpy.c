#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy tw strings
 * @dest: character used
 * @src: charater used
 * @n: length
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; dest[n] != '\0'; ++n)
	{
		src[n] = dest[n];
	}
	src[n] = '\0';
	return (0);
}
