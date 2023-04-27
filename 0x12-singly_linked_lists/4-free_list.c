#include "lists.h"

/**
 * free_list - frees a linked list.
 * @head: linked list head.
 * Return: no value.
 */

void free_list(list_t *head)
{
	list_t *current_elem;

	while ((current_elem = head) != NULL)
	{
		head = head->next;
		free(current_elem->str);
		free(current_elem);
	}
}
