#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character used
 * @c: character used
 *
 * Return: 1 on success, -1 error
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
