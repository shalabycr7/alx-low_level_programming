#include "lists.h"

/**
 * sum_dlistint - returns the sum of data(n)
 * of a linked list.
 * @head: list head.
 * Return: the sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			result += head->n;
			head = head->next;
		}
	}
	return (result);
}
