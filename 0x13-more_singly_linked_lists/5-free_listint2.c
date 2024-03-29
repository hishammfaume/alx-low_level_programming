#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - frees the list
 * @head: character
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
