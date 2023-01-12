#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**main - prints multiplication
 * @argc: character used
 * #argv: character used
 *
 * Return: multiplication
 */
int main(int argc, char**argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
