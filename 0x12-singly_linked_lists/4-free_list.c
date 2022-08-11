#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *replace;

	while ((replace = head) != NULL)
	{
		head = head->next;
		free(replace->str);
		free(replace);
	}
}
