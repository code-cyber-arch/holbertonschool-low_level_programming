#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at the specified index of
 * a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to return.
 *
 * Return: Pointer to the node at the index, or NULL if not found.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
