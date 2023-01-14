#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints character
 * @c: character used
 *
 * Return: 1 on success,-1 on failure
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
