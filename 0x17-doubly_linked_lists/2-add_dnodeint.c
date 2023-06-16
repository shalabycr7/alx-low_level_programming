#include "lists.h"

/**
 * add_dnodeint - create new_node at the beginning
 * of list.
 * @head: list head.
 * @n: value.
 * Return: new_node address.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *head_ptr;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	head_ptr = *head;
	if (head_ptr != NULL)
	{
		while (head_ptr->prev != NULL)
			head_ptr = head_ptr->prev;
	}
	new_node->next = head_ptr;
	if (head_ptr != NULL)
		head_ptr->prev = new_node;
	*head = new_node;
	return (new_node);
}
