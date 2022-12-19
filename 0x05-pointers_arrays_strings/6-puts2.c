#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints stringd
 * @str: character
 */
void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	if (s % 2 == 0)
		putchar(str[s]);
	putchar('\n');
}
