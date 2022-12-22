#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: character used
 * @src: characterused
 * Return: Returns a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (s);
}
