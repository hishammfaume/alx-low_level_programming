#include <stdio.h>
/**
 * main - prints letters in reverse
 *
 * Return: 0
*/
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
		putchar(letters);

	putchar('\n');

	return (0);
}
