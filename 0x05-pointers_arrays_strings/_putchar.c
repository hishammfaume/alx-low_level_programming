#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: character to print
 *
 * Return: on success1,on error -1
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}