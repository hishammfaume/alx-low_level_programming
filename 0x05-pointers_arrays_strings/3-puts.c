#include "main.h"
/**
 * _puts - prints a string
 * @str: character
 *  return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
