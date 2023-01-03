#include "main.h"
#include <unistd.h>
/**
 * _putchr - wites character c to stdout
 * @c: character used
 * Return: on success return 1,on error -1
 */
int _putchar(char c)
{
	return (write (1, &c, 1);
}
