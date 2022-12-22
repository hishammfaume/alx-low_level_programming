#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse array
 * @n: character used
 * @a: character use
 */
void reverse_array(int *a, int n)
{
	int i, c;
	
	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
