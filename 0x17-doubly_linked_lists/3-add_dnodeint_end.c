#include "lists.h"

/**
 * add_dnodeint_end - create new_node at the end
 * of a list.
 * @head: list head.
 * @n: value.
 * Return: new_node address.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *head_ptr;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	head_ptr = *head;
	if (head_ptr != NULL)
	{
		while (head_ptr->next != NULL)
			head_ptr = head_ptr->next;
		head_ptr->next = new_node;
	}
	else
		*head = new_node;
	new_node->prev = head_ptr;
	return (new_node);
}
