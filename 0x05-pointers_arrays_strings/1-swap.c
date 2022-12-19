#include "main.h"

#include <stdio.h>
/**
 * swap_int - swap itegers
 * @a: character
 * @b: character
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
