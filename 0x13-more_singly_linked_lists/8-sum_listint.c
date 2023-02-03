#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - sums up all data
 * @head: character used
 * @sum: character used
 * Return: sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
