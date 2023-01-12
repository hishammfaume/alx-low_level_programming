#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints a number
 * @argc: character used
 * @argv: character used
 * 
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
