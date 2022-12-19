#include "main.h"
#include <stdio.h>
/**
 * print_rev -  prints string in reverse
 * @s: character
 */
void print_rev(char *s)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
