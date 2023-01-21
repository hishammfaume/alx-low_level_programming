#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @size: ...
 * @array: ...
 * @cmp: ...
 * 
 * Return: -1 if no matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
