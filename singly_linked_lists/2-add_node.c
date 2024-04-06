#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list.
 * @head: Double pointer to the head of the list.
 * @str: String to store in the new node.
 *
 * Allocates memory for a new node, duplicates the input string,
 * and inserts the node at the start of the list.
 * Return: On success, returns a pointer to the new element.
 * On failure, returns NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
