#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	putchar(10);
}
