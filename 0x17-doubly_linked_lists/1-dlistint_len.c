#include "lists.h"

/**
 * dlistint_len - get the number of elements in list.
 * @h: list head.
 * Return: nodes count.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int result = 0;

	if (h == NULL)
		return (result);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		result++;
		h = h->next;
	}
	return (result);
}
