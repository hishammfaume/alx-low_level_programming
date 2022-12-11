#include <stdio.h>
/**
 * main - prints numbers of base 16
 *
 * Return: 0
*/
int main(void)
{
	int n;
	char lett;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (lett = 'a'; lett <= 'f'; lett++)
		putchar(lett);

	putchar('\n');

	return (0);
}
