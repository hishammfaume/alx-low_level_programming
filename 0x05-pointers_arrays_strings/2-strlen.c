#include "main.h"

#include <stdio.h>
/**
 * _strlen - checks lenghth
 * @s: character used
 *
 * Return: 0 s success
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	for (; *s++;)
		a++;
	return (a);
}
