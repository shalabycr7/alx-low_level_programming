#include "lists.h"

/**
 * free_dlistint - free a list.
 * @head: list head.
 * Return: no value.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *val;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((val = head) != NULL)
	{
		head = head->next;
		free(val);
	}
}
