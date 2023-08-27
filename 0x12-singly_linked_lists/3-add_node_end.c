#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* _strlen - Gives the length of a string.
* @s: String to evaluate.
* Return: The length of the given string.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *h = *head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = 0;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	while (h->next)
		h = h->next;
	h->next = new;
	return (new);
}
