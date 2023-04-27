#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: linked list head.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *element_new, *element_t;
	size_t chars_num = 0;

	element_new = malloc(sizeof(list_t));
	if (element_new == NULL)
		return (NULL);

	element_new->str = strdup(str);
	while (str[chars_num])
		chars_num++;

	element_new->len = chars_num;
	element_new->next = NULL;
	element_t = *head;

	if (element_t == NULL)
	{
		*head = element_new;
	} else
	{
		while (element_t->next != NULL)
			element_t = element_t->next;
		element_t->next = element_new;
	}

	return (*head);
}
