#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: linked list head.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_elem;
	size_t chars_num = 0;

	new_elem = malloc(sizeof(list_t));
	if (new_elem == NULL)
		return (NULL);

	new_elem->str = strdup(str);
	while (str[chars_num])
		chars_num++;

	new_elem->len = chars_num;
	new_elem->next = *head;
	*head = new_elem;

	return (*head);
}
