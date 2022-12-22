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
	int i;

	for (i = 0; i < n && *(src + 1); i++)
	{
		*(dest + 1) = *(src + 1);
	}
	for (; i < n; i++)
	{
		*(dest + 1) = '\0';
	}
	return (dest);
}
