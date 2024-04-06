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
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
