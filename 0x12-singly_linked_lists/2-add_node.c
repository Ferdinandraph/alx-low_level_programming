#include "tests.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: head of the link
 * @str: string to store in the list
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		Return (NULL);
	new->str = strdup(str);
	for (nchar = 0; str[nchar] != 0; nchar++)
		;
	new->len = nchar;
	new->next = *head;
	*head = new;
	return (*head);
}
