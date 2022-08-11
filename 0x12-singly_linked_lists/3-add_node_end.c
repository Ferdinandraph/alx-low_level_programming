#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: str pointer
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;
	size_t count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (; str[count]; count++)
		;
	new->len = count;
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
