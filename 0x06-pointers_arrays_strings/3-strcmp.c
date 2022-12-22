#include "main.h"
#include <stdio.h>
/**
 * _strcmp- compares strings
 * @s1: character
 * @s2: characte
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++)
	if (s1[i] > s2[i])
	{
		return (-1);
	}
	else if (s1[i] < s2[i])
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
