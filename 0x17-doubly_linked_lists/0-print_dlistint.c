#include "lists.h"

/**
 * print_dlistint - prints the elements of list.
 * @h: list head.
 * Return: nodes count.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int result = 0;

	if (h == NULL)
		return (result);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		result++;
		h = h->next;
	}

	return (result);
}
