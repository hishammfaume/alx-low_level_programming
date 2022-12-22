#include "main.h"
#include <stdio.h>
/**
 * string_toupper - prints string to upper
 * @s: characyer used
 * Return: char
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
	if (*(s + i) >= 'a' && *(s + i) <= 'z')
		*(s + i) -= 'a' - 'A';
	i++;
	}
	return (s);
}
